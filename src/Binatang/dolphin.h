// File: dolphin.h
#include <string>
#include "../water_animal.h"
#ifndef DOLPHIN_H
#define DOLPHIN_H

using namespace std;

class Dolphin : public WaterAnimal {
  public:
    /**
     * @brief Constructor.
     * Menciptakan Dolphin.
     */
    Dolphin(int x, int y, int id);
    /**
     * @brief Overloading Operator "="
     * Menambahkan fungsi pada operator "=" agar penyalinan tidak terjadi secara bit size
     * @param a adalah Dolphin yang hendak disalin
     */

    Dolphin& operator=(const Dolphin& a);
    /**
     * @brief Function interact
     * Interact pada binatang berupa string
     */
    string interact();
    /**
     * @brief Getter Content
     * Mengambil simbol yang menggambarkan spesies Dolphin
     * @return simbol yang menggambarkan spesies Dolphin
     */
    char GetContent();
    /**
     * @brief Getter Weight
     * Mengambil Weight dari Dolphin
     * @return Weight dari Dolphin
     */
    float GetWeight();
    /**
     * @brief Getter how_much_i_eat
     * Mengembalikan banyaknya jumlah makanan untuk Dolphin
     * @return banyaknya jumlah makanan untuk Dolphin
     */
    float GetEat();
    /**
     * @brief Getter what_i_eat
     * Mengembalikan jenis makanan Dolphin
     * @return jenis makanan Dolphin
     */
    char GetWEat();

};

#endif
