#include "boutons.h"

Boutons::Boutons(){
    io = acces_memoire(&shmid);
}

int Boutons::charge(){

    if(io->bouton_charge == 1)
    {
        return 1;
    }
    return 0;

}

int Boutons::stop(){

    if(io->bouton_stop == 1)
    {
        return 1;
    }
    return 0;

}

