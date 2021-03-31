#include <iostream>
#include "memoire_borne.h"
#include "donnees_borne.h"

#include "lecteurcarte.h"
#include "base_client.h"

//my libraries
#include "Generateur_save.h"


int main()
{

    LecteurCarte lecteurcarte;
    Client client;

    int a = 1;

    while (1)
    {
        lecteurcarte.lire_carte();
        client.authentifier(a);
      //  client.ajouter();
      //  client.suprimer();
      //  client.afficher_clients();

    }

}
void charger_batterie(){
	GenerateurSave generateur();

	generateur.charger();
}
