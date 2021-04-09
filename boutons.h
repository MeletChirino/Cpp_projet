#ifndef BOUTONS_H
#define BOUTONS_H
#include <iostream>
#include "donnees_borne.h"
#include "memoire_borne.h"

using namespace std;

class Boutons{
	public:
		int charge();
	       	int stop();

		entrees *io;
		int shmid;

		Boutons();

};

#endif
