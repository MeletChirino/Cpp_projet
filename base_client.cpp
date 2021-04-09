#include "base_client.h"


int Client::authentifier(int num_carte)
{
    for(int i = 0; i < 10; i++)
    {
        if(num_carte == base_donnee[i])
        {
           return 1;
        }
    }
    return 0;

}

void Client::afficher_clients()
{
    for(int i = 0; i < 10; i++)
    {
        cout <<"Client numero "<<i<<" a le numero "<<base_donnee[i]<< endl;
    }
}


void Client::ajouter()
{
    int num_client;
    int num_carte;

    cout <<"Saisir le numero du client a ajouter \n\r"<< endl;
    cin >>num_client;

    cout <<"Saisir le numero le numero de carte a ajouter \n\r"<< endl;
    cin >>num_carte;

    base_donnee[num_client] = num_carte;
}


void Client::supprimer()
{
    int i;

    cout <<"Choisir le numéro du client a supprimer \n\r"<< endl;

    cin >>i;
    base_donnee[i] = 0;

}

