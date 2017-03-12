// File: Crocodile.h


#include <string>
#include "../LWAnimal.h"
#ifndef CROCODILE_H
#define CROCODILE_H

using namespace std;

class Crocodile : public LWAnimal 
{
	public:
		/**
	 	* @brief Constructor.
	 	* Menciptakan Tiger.
	 	*/
		Crocodile(int x, int y, int id);

		Crocodile& operator=(const Crocodile& a);

		void interact();

		void move(int);
}

#endif