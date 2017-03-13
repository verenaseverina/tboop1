// File: whale.h


#include <string>
#include "../water_animal.h"
#ifndef WHALE_H
#define WHALE_H

using namespace std;

class Whale : public WaterAnimal 
{
	public:
		/**
	 	* @brief Constructor.
	 	* Menciptakan Whale.
	 	*/
		Whale(int x, int y, int id);

		Whale& operator=(const Whale& a);
		/**
		 * @brief Function interact
		 * Interact pada binatang berupa string
		 */
		string interact();

		char GetContent();

		float GetWeight();

		float GetEat();

		char GetWEat();

};

#endif
