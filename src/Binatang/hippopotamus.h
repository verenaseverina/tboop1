// File: hippopotamus.h


#include <string>
#include "../land_water_animal.h"
#ifndef HIPPOPOTAMUS_H
#define HIPPOPOTAMUS_H

using namespace std;

class Hippopotamus : public LWAnimal 
{
  public:
    /**
     * @brief Constructor.
     * Menciptakan Hippopotamus.
     */
  	Hippopotamus(int x, int y, int id);
  	/**
  	 * @brief Overloading Operator "="
     * Menambahkan fungsi pada operator "=" agar penyalinan tidak terjadi secara bit size
     * @param a adalah Hippopotamus yang hendak disalin
     */
    Hippopotamus& operator=(const Hippopotamus& a);
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
