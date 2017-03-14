// File: hippopotamus.h
#include <string>
#include "../land_water_animal.h"
#ifndef HIPPOPOTAMUS_H
#define HIPPOPOTAMUS_H

using namespace std;

class Hippopotamus : public LWAnimal {
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
    /**
     * @brief Getter Content
     * Mengambil simbol yang menggambarkan spesies Hippopotamus
     * @return simbol yang menggambarkan spesies Hippopotamus
     */
    char GetContent();
    /**
     * @brief Getter Weight
     * Mengambil Weight dari Hippopotamus
     * @return Weight dari Hippopotamus
     */
    float GetWeight();
    /**
     * @brief Getter how_much_i_eat
     * Mengembalikan banyaknya jumlah makanan untuk Hippopotamus
     * @return banyaknya jumlah makanan untuk Hippopotamus
     */
    float GetEat();
    /**
     * @brief Getter what_i_eat
     * Mengembalikan jenis makanan Hippopotamus
     * @return jenis makanan Hippopotamus
     */
    char GetWEat();

};

#endif
