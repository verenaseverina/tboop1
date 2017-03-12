// File: Penguin.h


#include <string>
#include "../LWAnimal.h"
#ifndef PENGUIN_H
#define PENGUIN_H

using namespace std;

class Penguin : public LWAnimal 
{
	public:
		/**
	 	* @brief Constructor.
	 	* Menciptakan Tiger.
	 	*/
		Penguin(int x, int y, int id);

		Penguin& operator=(const Penguin& a);

		void interact();

		void move(int);
};

#endif