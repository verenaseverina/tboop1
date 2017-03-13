// File: tiger.h


#include <string>
#include "../land_animal.h"
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
		/**
		 * @brief Overloading Operator "="
		 * Menambahkan fungsi pada operator "=" agar penyalinan tidak terjadi secara bit size
		 * @param a adalah Tiger yang hendak disalin
		 */
		Tiger& operator=(const Tiger& a);
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
