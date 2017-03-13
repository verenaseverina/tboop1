// File: Kangaroo.h


#include <string>
#include "../LandAnimal.h"
#ifndef KANGAROO_H
#define KANGAROO_H

using namespace std;

class Kangaroo : public LandAnimal 
{
	public:
		/**
	 	* @brief Constructor.
	 	* Menciptakan Tiger.
	 	*/
		Kangaroo(int x, int y, int id);
		/**
		 * @brief Overloading Operator "="
		 * Menambahkan fungsi pada operator "=" agar penyalinan tidak terjadi secara bit size
		 * @param a adalah Kangaroo yang hendak disalin
		 */
		Kangaroo& operator=(const Kangaroo& a);
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
