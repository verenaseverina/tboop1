// File: Hippopotamus.h


#include <string>
#include "../LWAnimal.h"
#ifndef HIPPOPOTAMUS_H
#define HIPPOPOTAMUS_H

using namespace std;

class Hippopotamus : public LWAnimal 
{
	public:
		/**
	 	* @brief Constructor.
	 	* Menciptakan Tiger.
	 	*/
		Hippopotamus(int x, int y, int id);

		Hippopotamus& operator=(const Hippopotamus& a);

		void interact();

		void move(int);
}

#endif