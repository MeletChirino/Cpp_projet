#include <iostream>
#include "memoire_borne.h"
#include "donnees_borne.h"

#include "lecteurcarte.h"
#include "base_client.h"
#include "Generateur_save.h"


int main()
{
    entrees *io;
    int shmid;

    io = acces_memoire(&shmid);

    GenerateurSave generateursave;
    LecteurCarte lecteurcarte;
    Client client;


    int choix = '.';
    int a = 1;

    while (1)
    {
        cout <<"Que souhaitez-vous faire ? "<< endl;
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
/*
void charger_batterie(){
    GenerateurSave generateur = GenerateurSave();

	generateur.charger();
}*/
