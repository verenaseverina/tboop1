// File: Anoa.h


#include <string>
#include "../LandAnimal.h"
#ifndef ANOA_H
#define ANOA_H

using namespace std;

class Anoa : public LandAnimal 
{
	public:
		/**
	 	* @brief Constructor.
	 	* Menciptakan Tiger.
	 	*/
		Anoa(int x, int y, int id);

		Anoa& operator=(const Anoa& a);

		void interact();

		void move(int);
};

#endif