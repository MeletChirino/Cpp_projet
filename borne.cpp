#include <iostream>
/*
#include "memoire_borne.h"
#include "donnees_borne.h"
*/
#include "lecteurcarte.h"
#include "base_client.h"
#include "Generateur_save.h"
#include "voyants.h"
#include "boutons.h"
#include "Prise.h"



int main()
{
    GenerateurSave generateursave;
    LecteurCarte lecteurcarte;
    Client client;
    Prise prise;

    int choix = '.';

    while (1)
    {
        cout <<"Que souhaitez-vous faire ? \n\r "<< endl;
        cout <<"1 : S'identifier      "<< endl;
        cout <<"2 : Ajouter client    "<< endl;
        cout <<"3 : Supprimer client  "<< endl;
        cin >> choix;

        if(choix == 1)
        {     
            lecteurcarte.lire_carte();

        }
        else if(choix == 2)
        {
            client.afficher_clients();
            client.ajouter();
        }
        if(choix == 3)
        {
            client.afficher_clients();
            client.supprimer();
        }

    }

}
