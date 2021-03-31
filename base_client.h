#ifndef BASE_CLIENT_H
#define BASE_CLIENT_H
#include <lcarte.h>
#include <vector>
#include <iostream>
#include <stdio.h>

using namespace std;


class Client
{
 	 public :

		int base_donnee[10] = {1,2,0,0,0,0,9,0,0,0};
		//int base_donnee =  1;
		//std::vector <int> base_donnee 

		int authentifier(int num_carte);
		//void ajouter();
		//void suprimer();
		//void afficher_clients();
};

#endif // BASE_CLIENT_H
