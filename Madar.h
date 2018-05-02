#include "Allat.h"

class Madar : public Allat
{
public:
    Madar(std::string &nev, int &eletkedv): Allat(nev, eletkedv) {}

    void jo();
    void atlagos();
    void rossz();
};
