// File: ElangB.h


#include <string>
#include "../AirAnimal.h"
#ifndef ELANGB_H
#define ELANGB_H

using namespace std;

class ElangB : public AirAnimal 
{
	public:
		/**
	 	* @brief Constructor.
	 	* Menciptakan Tiger.
	 	*/
		ElangB(int x, int y, int id);

		ElangB& operator=(const ElangB& a);

		void interact();

		void move(int);
}