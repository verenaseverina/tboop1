// File: panda.h
#include <string>
#include "../land_animal.h"
#ifndef PANDA_H
#define PANDA_H

using namespace std;

class Panda : public LandAnimal {
  public:
    /**
     * @brief Constructor.
     * Menciptakan Panda.
     */
    Panda(int x, int y, int id);
    /**
     * @brief Overloading Operator "="
     * Menambahkan fungsi pada operator "=" agar penyalinan tidak terjadi secara bit size
     * @param a adalah Panda yang hendak disalin
     */
    Panda& operator=(const Panda& a);
    /**
     * @brief Function interact
     * Interact pada binatang berupa string
     */
    string Interact();
    /**
     * @brief Getter Content
     * Mengambil simbol yang menggambarkan spesies Panda
     * @return simbol yang menggambarkan spesies Panda
     */
    char GetContent();
    /**
     * @brief Getter Weight
     * Mengambil Weight dari Panda
     * @return Weight dari Panda
     */
    float GetWeight();
    /**
     * @brief Getter how_much_i_eat
     * Mengembalikan banyaknya jumlah makanan untuk Panda
     * @return banyaknya jumlah makanan untuk Panda
     */
    float GetEat();
    /**
     * @brief Getter what_i_eat
     * Mengembalikan jenis makanan Panda
     * @return jenis makanan Panda
     */
    char GetWEat();
};

#endif
