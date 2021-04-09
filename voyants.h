#ifndef VOYANTS_H
#define VOYANTS_H
#include <vector>
#include <iostream>
#include <stdio.h>
#include <unistd.h>
#include "donnees_borne.h"
#include "memoire_borne.h"
#include "boutons.h"


using namespace std;


class Voyants{
	public:
		void set_charge();
		void set_defaut();
		void set_dispo();
		void after_charge();
		int dispo();

		float time0;
			

		entrees *io;
		int shmid;

		int Prise;

		Boutons boutons;

		Voyants();

};

#endif
