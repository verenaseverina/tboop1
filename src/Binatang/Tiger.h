// File: Tiger.h


#include <string>
#include "../LandAnimal.h"
#ifndef TIGER_H
#define TIGER_H

using namespace std;

class Tiger : public LandAnimal 
{
	public:
		/**
	 	* @brief Constructor.
	 	* Menciptakan Tiger.
	 	*/
		Tiger(int x, int y, int id);

		Tiger& operator=(const Tiger& a);

		string interact();

};

#endif