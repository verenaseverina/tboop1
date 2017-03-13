// File: Panda.h


#include <string>
#include "../LandAnimal.h"
#ifndef PANDA_H
#define PANDA_H

using namespace std;

class Panda : public LandAnimal 
{
	public:
		/**
	 	* @brief Constructor.
	 	* Menciptakan Panda.
	 	*/
		Panda(int x, int y, int id);
		/**
		 * @brief Overloading Operator "="
		 * Menambahkan fungsi pada operator "=" agar penyalinan tidak terjadi secara bit size
		 * @param a adalah Panda yang hendak disalin
		 */
		Panda& operator=(const Panda& a);
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
