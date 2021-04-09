#ifndef PRISE_H
#define PRISE_H
#include <lcarte.h>
#include <vector>
#include <iostream>
#include <unistd.h>
#include <stdio.h>
#include "donnees_borne.h"
#include "memoire_borne.h"

using namespace std;

class Prise
{
 	 public :

		entrees *io;
 		int shmid;

		void verouiller_trappe();						
		void deverouiller_trappe();
       		void set_prise(led);

		Prise();
};

#endif // PRISE_H
