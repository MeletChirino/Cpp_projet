#include "Generateur_save.h"


GenerateurSave::GenerateurSave(){
    io = acces_memoire(&shmid);
}

void GenerateurSave::generer_PWM(int mode)
{
	switch(mode){
		case 1: 
			io->gene_pwm=DC;
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
    prise.deverouiller_trappe();

    voyant.after_charge();

    generer_PWM(1);

    while(io->contacteur_AC == 0)
    {
        if(io->gene_u == 9)
        {
            prise.set_prise(val);

            prise.verouiller_trappe();

            generer_PWM(2);

            fermer_AC();
        }

    }
    charger();
}

void GenerateurSave::charger()
{
    int time =2;
    int time2 =100000;

    sleep(time*1);

    generer_PWM(3);

    while(io->gene_u != 9)
    {
        usleep(time2*5);
        voyant.after_charge();
    }


    usleep(time2*5);

    ouvrir_AC();

    generer_PWM(1);

    deconnecter();
}

void GenerateurSave::ouvrir_AC()
{
    io->contacteur_AC = 0;
}

void GenerateurSave::fermer_AC()
{
    io->contacteur_AC = 1;
}

void GenerateurSave::deconnecter()
{
    cout <<"Inserer votre carte \n\r"<< endl;
    attente_insertion_carte();
    num_carte = lecture_numero_carte();

    if(client.authentifier(num_carte)==1)
    {
        cout <<"authentification reussie \n\r"<< endl;

        prise.deverouiller_trappe();

        while(io->contacteur_AC == 0)
        {
            if(io->gene_u == 12)
            {
                io->led_charge = OFF;
                io->led_dispo = VERT;
                io->led_prise = OFF;

                prise.verouiller_trappe();
                fermer_AC();
            }
        }
        ouvrir_AC();

        cout <<"Merci d'avoir utilisé ma borne, à bientôt ! \n\r"<< endl;
    }
    else
    {
        cout <<"authentification echouee \n\r"<< endl;
    }

}
