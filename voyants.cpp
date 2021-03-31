#include "voyants.h"
#include <donnees_borne.h>
#include <memoire_borne.h>

entrees *io;
int shmid;

void Voyants::set_charge(){
	io = acces_memoire(&shmid);
	//je peux utiliser un string comme argument?
	//
	//if vert -> io.led_vert(allumer)
	io->led_charge=VERT;
	//if vert -> io.led_rouge(allumer)
	io->led_charge=ROUGE;
}
void Voyants::set_dispo(){
}
void Voyants::blink_charge(){
}
int Voyants::dispo(){
}
