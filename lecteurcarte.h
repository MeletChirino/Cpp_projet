#ifndef LECTEURCARTE_H
#define LECTEURCARTE_H
#include <lcarte.h>
#include "base_client.h"
#include <iostream>

using namespace std;



class LecteurCarte
{
  public : 
	int num_carte;
	void initialiser();
	void lire_carte();

 	Client client;
};


#endif // LECTEURCARTE_H
