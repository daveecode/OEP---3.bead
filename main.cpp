#include <iostream>
#include <string>
#include "Allat.h"
#include "Hal.h"
#include "Madar.h"
#include "Kutya.h"
#include <fstream>

using namespace std;

void Napok(char kedv, Allat **matrix, int allat_db);
void Eredmeny(Allat **matrix, int allat_db);

int main()
{
    setlocale(LC_ALL, "");
    ifstream in("input.txt");

    int allatok_db;
    in >> allatok_db;
    cout << allatok_db << endl;

    struct Tulajdonsag {

        char fajta;
        string nev;
        int _eletkedv;
    };

    Tulajdonsag * allatok = new Tulajdonsag[allatok_db];

    for(int i = 0; i < allatok_db; i++) {

        in >> allatok[i].fajta;
        in >> allatok[i].nev;
        in >> allatok[i]._eletkedv;
    }

    string nap;
    in >> nap;
    cout << nap << endl;

    in.close();

    Allat **matrix = new Allat *[allatok_db];
    for(int i = 0; i < allatok_db; i++) {

        if(allatok[i].fajta == 'H') {
            matrix[i] = new Hal(allatok[i].nev, allatok[i]._eletkedv);
        }

        else if(allatok[i].fajta == 'M') {
            matrix[i] = new Madar(allatok[i].nev, allatok[i]._eletkedv);
        }

        else if(allatok[i].fajta == 'K') {
            matrix[i] = new Kutya(allatok[i].nev, allatok[i]._eletkedv);
        }
    }

    for(int i = 0; i < nap.size(); i++) {
        cout << i+1 << ". nap után: " << endl;
        Napok(nap[i], matrix, allatok_db);
        Eredmeny(matrix, allatok_db);
    }
}

void Napok(char kedv, Allat **matrix, int allat_db)
{
    for(int i = 0; i < allat_db; i++) {

        if(kedv == 'j') {
            matrix[i]->jo();
        }

        else if(kedv == 'a') {
            matrix[i]->atlagos();
        }

        else if(kedv == 'r') {
            matrix[i]->rossz();
        }
    }
}

void Eredmeny(Allat **matrix, int allat_db)
{
    for(int i = 0; i < allat_db; i++) {
        cout << "\n" << matrix[i]->lekerdez2() << " " << matrix[i]->lekerdez() << endl;
    }
}
