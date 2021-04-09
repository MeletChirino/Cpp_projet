#include "Prise.h"

Prise::Prise(){
    io = acces_memoire(&shmid);
}

void Prise::verouiller_trappe()
{
    usleep(5000);
    io->led_trappe = OFF;
}

void Prise::deverouiller_trappe()
{
    usleep(5000);
    io->led_trappe = VERT;
}

void Prise::set_prise(led val)
{
    io->led_prise = VERT;
}
