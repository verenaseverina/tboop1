// File: Penguin.h


#include <string>
#include "../LWAnimal.h"
#ifndef PENGUIN_H
#define PENGUIN_H

using namespace std;

class Penguin : public LWAnimal 
{
	public:
		/**
	 	* @brief Constructor.
	 	* Menciptakan Penguin.
	 	*/
		Penguin(int x, int y, int id);
		/**
		 * @brief Overloading Operator "="
		 * Menambahkan fungsi pada operator "=" agar penyalinan tidak terjadi secara bit size
		 * @param a adalah Penguin yang hendak disalin
		 */
		Penguin& operator=(const Penguin& a);
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
