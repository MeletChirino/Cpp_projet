#include <iostream>
#include "memoire_borne.h"
#include "donnees_borne.h"

#include "lecteurcarte.h"
//my libraries
#include "Generateur_save.h"
#include "voyants.h"
#include "Prise.h"

int main()
{

    LecteurCarte lecteurcarte;

    while (1)
    {
        lecteurcarte.lire_carte();
    }

}
void charger_batterie(){
	GenerateurSave generateur();
	Voyants voyant();
	Prise prise();

	voyant.set_charge("rouge");

}
