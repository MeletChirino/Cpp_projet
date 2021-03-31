#include "lecteurcarte.h"

void LecteurCarte::initialiser()
{
    //carte insérée
}

void LecteurCarte::lire_carte()
{

    cout <<"Inserer votre carte"<< endl;
    attente_insertion_carte();
    num_carte = lecture_numero_carte();

    if(client.authentifier(num_carte)==1)
    {
        cout <<"authentification reussie"<< endl;
    }
    else
    {
        cout <<"authentification echouee"<< endl;
    }


}

