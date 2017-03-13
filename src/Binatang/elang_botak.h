// File: elang_botak.h


#include <string>
#include "../air_animal.h"
#ifndef ELANGB_H
#define ELANGB_H

using namespace std;

class ElangB : public AirAnimal 
{
  public:
    /**
	 * @brief Constructor.
	 * Menciptakan ElangB.
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

    float GetWeight();

    float GetEat();

    char GetWEat();

};

#endif
