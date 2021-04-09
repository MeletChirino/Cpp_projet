#ifndef GENERATEUR_SAVE_H
#define GENERATEUR_SAVE_H
#include <lcarte.h>
#include <vector>
#include <iostream>
#include <stdio.h>
#include "donnees_borne.h"
#include "memoire_borne.h"
#include "Prise.h"
#include "boutons.h"
#include "voyants.h"
#include "base_client.h"

using namespace std;

class GenerateurSave
{
 	 public :
		led val;
		int num_carte;

		GenerateurSave();
		void generer_PWM(int);	
		void tension();					
		void charger();
		void ouvrir_AC();
		void fermer_AC();
		void deconnecter();

		entrees *io;
 		int shmid;

		Client client;
		Voyants voyant;
		Prise prise;
		Boutons boutons;
};

#endif // GENERATEUR_SAVE
