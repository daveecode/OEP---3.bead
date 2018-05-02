#pragma once

#include <iostream>
#include <string>

class Allat
{
protected:
    int eletkedv;
    std::string nev;

public:
    Allat(std::string &nev, int &eletkedv): nev(nev), eletkedv(eletkedv) {}

    int lekerdez() {return eletkedv; }
    std::string lekerdez2() {return nev; }
    void modosit(int ertek);

    virtual void jo(){};
    virtual void rossz(){};
    virtual void atlagos(){};
};
