// File: ElangB.h


#include <string>
#include "../AirAnimal.h"
#ifndef ELANGB_H
#define ELANGB_H

using namespace std;

class ElangB : public AirAnimal 
{
	public:
		/**
	 	* @brief Constructor.
	 	* Menciptakan Tiger.
	 	*/
		ElangB(int x, int y, int id);
		/**
		 * @brief Overloading Operator "="
		 * Menambahkan fungsi pada operator "=" agar penyalinan tidak terjadi secara bit size
		 * @param a adalah ElangB yang hendak disalin
		 */

		ElangB& operator=(const ElangB& a);
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