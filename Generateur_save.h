#ifndef GENERATEUR_SAVE_H
#define GENERATEUR_SAVE_H
#include <lcarte.h>
#include <iostream>
#include "donnees_borne.h"
#include "memoire_borne.h"
#include "Prise.h"
#include "voyants.h"

using namespace std;

class GenerateurSave
{
 	 public :
		GenerateurSave();
		void generer_PWM(int);	
		void tension();					
		void charger();
		void ouvrir_AC();
		void fermer_AC();
		void deconnecter();

		entrees *io;
 		int shmid;

		Voyants voyant;
		Prise prise;
};

#endif // GENERATEUR_SAVE
