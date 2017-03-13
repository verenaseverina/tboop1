// File: kelelawar.h


#include <string>
#include "../air_animal.h"
#ifndef KELELAWAR_H
#define KELELAWAR_H

using namespace std;

class Kelelawar : public AirAnimal 
{
	public:
		/**
	 	* @brief Constructor.
	 	* Menciptakan Tiger.
	 	*/
		Kelelawar(int x, int y, int id);
		/**
		 * @brief Overloading Operator "="
		 * Menambahkan fungsi pada operator "=" agar penyalinan tidak terjadi secara bit size
		 * @param a adalah Kelelawar yang hendak disalin
		 */
		Kelelawar& operator=(const Kelelawar& a);
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
