// File: Crocodile.h


#include <string>
#include "../LWAnimal.h"
#ifndef CROCODILE_H
#define CROCODILE_H

using namespace std;

class Crocodile : public LWAnimal 
{
	public:
		/**
	 	* @brief Constructor.
	 	* Menciptakan Tiger.
	 	*/
		Crocodile(int x, int y, int id);
		/**
		 * @brief Overloading Operator "="
		 * Menambahkan fungsi pada operator "=" agar penyalinan tidak terjadi secara bit size
		 * @param a adalah Crocodile yang hendak disalin
		 */

		Crocodile& operator=(const Crocodile& a);
		/**
		 * @brief Function interact
		 * Interact pada binatang berupa string
		 */
		string interact();

		char GetContent();

		string interact();

		float GetWeight();

		float GetEat();

		int GetWEat();

};

#endif

