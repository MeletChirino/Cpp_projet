#include "voyants.h"

Voyants::Voyants(){
    io = acces_memoire(&shmid);
}

void Voyants::set_charge(){

    float time0 = io->timer_sec;

    while(io->timer_sec - time0 <= 8)
    {
        io->led_charge = VERT;
    }

    if(io->timer_sec - time0 > 8)
    {
        io->led_charge = OFF;
        io->timer_sec = 0;
    }

}
void Voyants::set_dispo(){

        io->led_dispo = VERT;

}
void Voyants::set_defaut(){

        float time0 = io->timer_sec;

        while(io->timer_sec - time0 <= 8)
        {
            io->led_defaut = ROUGE;
        }
        if(io->timer_sec - time0 > 8)
        {
            io->led_defaut = OFF;
            io->timer_sec = 0;
        }
}
//void Voyants::blink_charge(){}
//int Voyants::dispo(){}
