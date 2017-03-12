// File: Shark.h


#include <string>
#include "../WaterAnimal.h"
#ifndef SHARK_H
#define SHARK_H

using namespace std;

class Shark : public WaterAnimal 
{
	public:
		/**
	 	* @brief Constructor.
	 	* Menciptakan Shark.
	 	*/
		Shark(int x, int y, int id);

		Shark& operator=(const Shark& a);

		void interact();

}

#endif