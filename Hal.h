#include "Allat.h"

class Hal : public Allat
{
public:
    Hal(std::string &nev, int &eletkedv): Allat(nev, eletkedv) {}

    void atlagos();
    void jo();
    void rossz();
};
