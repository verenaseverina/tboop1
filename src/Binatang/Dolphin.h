// File: Dolphin.h


#include <string>
#include "../WaterAnimal.h"
#ifndef DOLPHIN_H
#define DOLPHIN_H

using namespace std;

class Dolphin : public WaterAnimal 
{
	public:
		/**
	 	* @brief Constructor.
	 	* Menciptakan Dolphin.
	 	*/
		Dolphin(int x, int y, int id);

		Dolphin& operator=(const Dolphin& a);

		string interact();

};

#endif