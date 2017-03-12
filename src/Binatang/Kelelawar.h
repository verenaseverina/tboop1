// File: Kelelawar.h


#include <string>
#include "../AirAnimal.h"
#ifndef KELELAWAR_H
#define KELELAWAR_H

using namespace std;

class Kelelawar : public AirAnimal 
{
	public:
		/**
	 	* @brief Constructor.
	 	* Menciptakan Tiger.
	 	*/
		Kelelawar(int x, int y, int id);

		Kelelawar& operator=(const Kelelawar& a);

		void interact();

		void move(int);
};

#endif