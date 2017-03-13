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
	 	* Menciptakan Toucan.
	 	*/
		Toucan(int x, int y, int id);
		/**
		 * @brief Overloading Operator "="
		 * Menambahkan fungsi pada operator "=" agar penyalinan tidak terjadi secara bit size
		 * @param a adalah Toucan yang hendak disalin
		 */
		Toucan& operator=(const Toucan& a);
		/**
		 * @brief Function interact
		 * Interact pada binatang berupa string
		 */
		string interact();

		char GetContent();

		float GetWeight();

		float GetEat();

		int GetWEat();

};

#endif
