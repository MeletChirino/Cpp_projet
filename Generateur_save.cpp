#include "Generateur_save.h"
#include <donnees_borne.h>
#include <memoire_borne.h>


GenerateurSave::GenerateurSave(){
    io = acces_memoire(&shmid);
}

void GenerateurSave::generer_PWM(int mode)
{
	switch(mode){
		case 1: 
			io->gene_pwm=DC;
            cout <<"test"<< endl;
			break;
		case 2:
			io->gene_pwm=AC_1K;
			break;
		case 3:
            io->gene_pwm=AC_CL;
			break;
	
	}
}

void GenerateurSave::tension()
{
    while(1)
    {
        switch(io->gene_u)
        {
            case 9: cout <<"Prise connectee"<< endl;
            break;

            case 12: cout <<"Prise deconnectee"<< endl;
            break;
        }
    }
}

void GenerateurSave::charger()
{
    //Voyants voyant();

    //voyant.set_charge("rouge");
    //si cette methode fait partie on fait pas self.generer_pwm()?

    //can it read DC like that or i have to pass the argument
    // as string?



    prise.deverouiller_trappe();

    generer_PWM(1);

    cout << io->gene_u << endl;
    //prise.verrouiller_trappe();
   // prise.set_prise();//VERT comme argument?

    generer_PWM(2);
    fermer_AC();
    generer_PWM(3);
    ouvrir_AC();
    generer_PWM(1);//DC????
    voyant.set_charge();

}

void GenerateurSave::ouvrir_AC()
{
}

void GenerateurSave::fermer_AC()
{
}

void GenerateurSave::deconnecter()
{
}
