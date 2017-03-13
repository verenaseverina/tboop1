// File: flyingfish.h


#include <string>
#include "../water_air_animal.h"
#ifndef FLYINGFISH_H
#define FLYINGFISH_H

using namespace std;

class FlyingFish : public LandAnimal 
{
  public:
    /**
     * @brief Constructor.
     * Menciptakan FlyingFish.
     */
    FlyingFish(int x, int y, int id);
    /**
     * @brief Overloading Operator "="
     * Menambahkan fungsi pada operator "=" agar penyalinan tidak terjadi secara bit size
     * @param a adalah FlyingFish yang hendak disalin
     */
    FlyingFish& operator=(const FlyingFish& a);
    /**
     * @brief Function interact
     * Interact pada binatang berupa string
     */
    string interact();

    /**
     * @brief Getter Content
     * Mengambil simbol yang menggambarkan spesies FlyingFish
     * @return simbol yang menggambarkan spesies FlyingFish
     */
    char GetContent();

    /**
     * @brief Getter Weight
     * Mengambil Weight dari FlyingFish
     * @return Weight dari FlyingFish
     */
    float GetWeight();

    /**
     * @brief Getter how_much_i_eat
     * Mengembalikan banyaknya jumlah makanan untuk FlyingFish
     * @return banyaknya jumlah makanan untuk FlyingFish
     */
    float GetEat();

    /**
     * @brief Getter what_i_eat
     * Mengembalikan jenis makanan FlyingFish
     * @return jenis makanan FlyingFish
     */
    char GetWEat();

};

#endif
