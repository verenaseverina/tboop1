// File: Panda.h


#include <string>
#include "../LandAnimal.h"
#ifndef PANDA_H
#define PANDA_H

using namespace std;

class Panda : public LandAnimal 
{
	public:
		/**
	 	* @brief Constructor.
	 	* Menciptakan Tiger.
	 	*/
		Panda(int x, int y, int id);

		Panda& operator=(const Panda& a);

		string interact();

};

#endif