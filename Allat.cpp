#include "Allat.h"

void Allat::modosit(int ertek) {

    if(eletkedv != 0) {
        if(eletkedv + ertek <= 0) {
            eletkedv = 0;
        }
        else if(eletkedv + ertek >= 100) {
            eletkedv = 100;
        }
        else {
            eletkedv = eletkedv + ertek;
        }
    }
}
