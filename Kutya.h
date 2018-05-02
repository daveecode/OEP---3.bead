#include "Allat.h"

class Kutya : public Allat
{
public:
    Kutya(std::string &nev, int &eletkedv): Allat(nev, eletkedv) {}

    void jo();
    void rossz();
    void atlagos();
};
