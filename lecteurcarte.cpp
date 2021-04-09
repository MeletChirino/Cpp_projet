#include "lecteurcarte.h"

void LecteurCarte::initialiser()
{
    //carte insérée
}

void LecteurCarte::lire_carte()
{

    cout <<"Inserer votre carte \n\r"<< endl;
    attente_insertion_carte();
    num_carte = lecture_numero_carte();

    if(client.authentifier(num_carte)==1)
    {
        cout <<"authentification reussie \n\r"<< endl;
        voyant.set_charge();

        do
        {
           voyant.set_dispo();
        }while(boutons.charge()==0);

        generateursave.tension();
    }
    else
    {
        cout <<"authentification echouee \n\r"<< endl;
        voyant.set_defaut();
    }


}

