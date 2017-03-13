// File: anoa.h


#include <string>
#include "../land_animal.h"
#ifndef ANOA_H
#define ANOA_H

using namespace std;

class Anoa : public LandAnimal 
{
  public:
    /**
	* @brief Constructor.
	* Menciptakan Anoa.
	*/
    Anoa(int x, int y, int id);
    /**
     * @brief Overloading Operator "="
     * Menambahkan fungsi pada operator "=" agar penyalinan tidak terjadi secara bit size
     * @param a adalah Anoa yang hendak disalin
     */
    Anoa& operator=(const Anoa& a);
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
