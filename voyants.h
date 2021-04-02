#ifndef VOYANTS_H
#define VOYANTS_H
#include <iostream>
#include "donnees_borne.h"
#include "memoire_borne.h"

using namespace std;


class Voyants{
	public:
		void set_charge();
		void set_defaut();
		void set_dispo();
		void blink_charge();
		int dispo();

		entrees *io;
		int shmid;

		Voyants();

};

#endif
