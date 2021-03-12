#ifndef GENERATEUR_SAVE_H
#define GENERATEUR_SAVE_H
#include <lcarte.h>


class GenerateurSave
{
 	 public :
		void generer_PWN();	
		float tension();					
		void charger();
		void ouvrir_AC();
		void fermer_AC();
		void deconnecter();
};

#endif // GENERATEUR_SAVE
