#ifndef BASE_CLIENT_H
#define BASE_CLIENT_H
#include <lcarte.h>


class Client
{
	private:
		int num_carte : integrer;
		
 	 public :
		void reprise();							//constructor
		void authentifier();
};

#endif // BASE_CLIENT_H
