// File: Rhino.h


#include <string>
#include "../LandAnimal.h"
#ifndef RHINO_H
#define RHINO_H

using namespace std;

class Rhino : public LandAnimal 
{
	public:
		/**
	 	* @brief Constructor.
	 	* Menciptakan Tiger.
	 	*/
		Rhino(int x, int y, int id);

		Rhino& operator=(const Rhino& a);

		void interact();

		void move(int);
}