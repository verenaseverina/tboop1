// File: Toucan.h


#include <string>
#include "../AirAnimal.h"
#ifndef TOUCAN_H
#define TOUCAN_H

using namespace std;

class Toucan : public AirAnimal 
{
	public:
		/**
	 	* @brief Constructor.
	 	* Menciptakan Tiger.
	 	*/
		Toucan(int x, int y, int id);

		Toucan& operator=(const Toucan& a);

		string interact();

};

#endif