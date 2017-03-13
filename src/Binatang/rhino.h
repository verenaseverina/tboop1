// File: rhino.h


#include <string>
#include "../land_animal.h"
#ifndef RHINO_H
#define RHINO_H

using namespace std;

class Rhino : public LandAnimal 
{
	public:
		/**
	 	* @brief Constructor.
	 	* Menciptakan Rhino.
	 	*/
		Rhino(int x, int y, int id);
		/**
		 * @brief Overloading Operator "="
		 * Menambahkan fungsi pada operator "=" agar penyalinan tidak terjadi secara bit size
		 * @param a adalah Rhino yang hendak disalin
		 */
		Rhino& operator=(const Rhino& a);
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
