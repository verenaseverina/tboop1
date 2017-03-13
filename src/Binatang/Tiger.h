// File: Tiger.h


#include <string>
#include "../LandAnimal.h"
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

};

#endif