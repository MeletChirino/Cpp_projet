#include "Generateur_save.h"
#include <donnees_borne.h>
#include <memoire_borne.h>


GenerateurSave::GenerateurSave(){
    entrees *io;
    int shmid;
}

void GenerateurSave::generer_PWM(int mode)
{
	io = acces_memoire(&shmid);
	switch(mode){
		case 1: 
			io->gene_pwm=DC;
			break;
		case 2:
			io->gene_pwm=AC_1K;
			break;
		case 3:
			io->gene_PWM=AC_CL;
			break;
	
	}
}

float GenerateurSave::tension()
{
}

void GenerateurSave::charger()
{
	Voyants voyant();
	Prise prise();

	voyant.set_charge("rouge");
	//si cette methode fait partie on fait pas self.generer_pwm()?
	generer_PWM(1);
	//can it read DC like that or i have to pass the argument
	// as string?

	prise.deverrouiller_trape();
	prise.verrouiller_trappe();
	prise.set_prise();//VERT comme argument?

	generer_PWM(2);
	fermer_AC();
	generer_PWM(3);
	ouvrir_AC();
	generer_PWM();//DC????
	voyant.set_charge("vert");

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
