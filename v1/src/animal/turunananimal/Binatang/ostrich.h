// File: ostrich.h
#include <string>
#include "../land_air_animal.h"
#ifndef OSTRICH_H
#define OSTRICH_H

using namespace std;

class Ostrich : public LAAnimal {
  public:
    /**
     * @brief Constructor.
     * Menciptakan Ostrich.
     */
    Ostrich(int x, int y, int id);
    /**
     * @brief Overloading Operator "="
     * Menambahkan fungsi pada operator "=" agar penyalinan tidak terjadi secara bit size
     * @param a adalah Ostrich yang hendak disalin
     */
    Ostrich& operator=(const Ostrich& a);
    /**
     * @brief Function interact
     * Interact pada binatang berupa string
     */
    string Interact();
    /**
     * @brief Getter Content
     * Mengambil simbol yang menggambarkan spesies Ostrich
     * @return simbol yang menggambarkan spesies Ostrich
     */
    char GetContent();
    /**
     * @brief Getter Weight
     * Mengambil Weight dari Ostrich
     * @return Weight dari Ostrich
     */
    float GetWeight();
    /**
     * @brief Getter how_much_i_eat
     * Mengembalikan banyaknya jumlah makanan untuk Ostrich
     * @return banyaknya jumlah makanan untuk Ostrich
     */
    float GetEat();
    /**
     * @brief Getter what_i_eat
     * Mengembalikan jenis makanan Ostrich
     * @return jenis makanan Ostrich
     */
    char GetWEat();
};

#endif
