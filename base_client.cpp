#include "base_client.h"


int Client::authentifier(int num_carte)
{
    for(int i = 0; i < 10; i++)
    {
        if(num_carte == base_donnee[i])
        {
           return 1;
        }
        else
        {

        }
    }
    return 0;

}
/*
void Client::ajouter()
{
    int i=2;
    int numclient;

    cout <<'Saisir le numero du client a ajouter'<< endl;
    cin >>numclient;


    base_donnee[i+1] = numclient;
}

void Client::supprimer()
{
    int i;
    int numclient;

    cout <<'Choisir le numéro du client a supprimer'<< endl;

    for(i=0; i<10; i++)
    {
        cout <<'Client numero'<<i<<'a le numero '<<client[i]<< endl;
    }
    cin >>i;
    client[i] = 0;

}
*/
