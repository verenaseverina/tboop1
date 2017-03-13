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
		/**
		 * @brief Overloading Operator "="
		 * Menambahkan fungsi pada operator "=" agar penyalinan tidak terjadi secara bit size
		 * @param a adalah Dolphin yang hendak disalin
		 */

		Dolphin& operator=(const Dolphin& a);
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
