// File: tiger.h
#include <string>
#include "../land_animal.h"
#ifndef TIGER_H
#define TIGER_H

using namespace std;

class Tiger : public LandAnimal {
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
	/**
     * @brief Getter Content
     * Mengambil simbol yang menggambarkan spesies Tiger
     * @return simbol yang menggambarkan spesies Tiger
     */
    char GetContent();
    /**
     * @brief Getter Weight
     * Mengambil Weight dari Tiger
     * @return Weight dari Tiger
     */
    float GetWeight();
    /**
     * @brief Getter how_much_i_eat
     * Mengembalikan banyaknya jumlah makanan untuk Tiger
     * @return banyaknya jumlah makanan untuk Tiger
     */
    float GetEat();
    /**
     * @brief Getter what_i_eat
     * Mengembalikan jenis makanan Tiger
     * @return jenis makanan Tiger
     */
    char GetWEat();
};

#endif
