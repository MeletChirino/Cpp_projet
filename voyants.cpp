#include "voyants.h"



Voyants::Voyants(){
    io = acces_memoire(&shmid);
}

void Voyants::set_charge(){

    float time0 = io->timer_sec;

    while(io->timer_sec - time0 <= 8)
    {
        if(io->timer_sec - time0 == 1 || io->timer_sec - time0 == 3 || io->timer_sec - time0 == 5 || io->timer_sec - time0 == 7)
        {
            io->led_charge = VERT;
            usleep(500000);
        }
        io->led_charge = OFF;

    }

    if(io->timer_sec - time0 > 8)
    {
        io->led_charge = OFF;
    }

}

void Voyants::set_dispo(){

    int time =100000;
    float time0 = io->timer_sec;

    io->led_dispo = VERT;

    if(io->timer_sec - time0 <= 60)
    {
        usleep(time*5);

        if(boutons.charge()==1)
        {

            io->led_dispo = OFF;     
        }
    }
}
void Voyants::set_defaut(){

        float time0 = io->timer_sec;

        while(io->timer_sec - time0 <= 8)
        {
            if(io->timer_sec - time0 == 1 || io->timer_sec - time0 == 3 || io->timer_sec - time0 == 5 || io->timer_sec - time0 == 7)
            {
                io->led_defaut = ROUGE;
                usleep(500000);
            }
            io->led_defaut = OFF;
        }

        if(io->timer_sec - time0 > 8)
        {
            io->led_defaut = OFF;
        }
}
void Voyants::after_charge()
{

    io->led_charge = ROUGE;

    if(io->gene_u == 9)
    {
        io->led_charge = VERT;
    }


}
//int Voyants::dispo(){}
