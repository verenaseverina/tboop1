// File: Shark.h


#include <string>
#include "../WaterAnimal.h"
#ifndef SHARK_H
#define SHARK_H

using namespace std;

class Shark : public WaterAnimal 
{
	public:
		/**
	 	* @brief Constructor.
	 	* Menciptakan Shark.
	 	*/
		Shark(int x, int y, int id);
		/**
		 * @brief Overloading Operator "="
		 * Menambahkan fungsi pada operator "=" agar penyalinan tidak terjadi secara bit size
		 * @param a adalah Shark yang hendak disalin
		 */
		Shark& operator=(const Shark& a);
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