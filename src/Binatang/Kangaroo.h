// File: Kangaroo.h


#include <string>
#include "../LandAnimal.h"
#ifndef KANGAROO_H
#define KANGAROO_H

using namespace std;

class Kangaroo : public LandAnimal 
{
	public:
		/**
	 	* @brief Constructor.
	 	* Menciptakan Tiger.
	 	*/
		Kangaroo(int x, int y, int id);

		Kangaroo& operator=(const Kangaroo& a);

		void interact();

		void move(int);
};

#endif