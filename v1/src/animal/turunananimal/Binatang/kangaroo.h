// File: kangaroo.h
#include <string>
#include "../land_animal.h"
#ifndef KANGAROO_H
#define KANGAROO_H

using namespace std;

class Kangaroo : public LandAnimal {
  public:
    /**
     * @brief Constructor.
     * Menciptakan Kangoroo.
     */
    Kangaroo(int x, int y, int id);
    /**
     * @brief Overloading Operator "="
     * Menambahkan fungsi pada operator "=" agar penyalinan tidak terjadi secara bit size
     * @param a adalah Kangaroo yang hendak disalin
     */
    Kangaroo& operator=(const Kangaroo& a);
    /**
     * @brief Function interact
     * Interact pada binatang berupa string
     */
    string Interact();
    /**
     * @brief Getter Content
     * Mengambil simbol yang menggambarkan spesies Kangaroo
     * @return simbol yang menggambarkan spesies Kangaroo
     */
    char GetContent();
    /**
     * @brief Getter Weight
     * Mengambil Weight dari Kangaroo
     * @return Weight dari Kangaroo
     */
    float GetWeight();
    /**
     * @brief Getter how_much_i_eat
     * Mengembalikan banyaknya jumlah makanan untuk Kangaroo
     * @return banyaknya jumlah makanan untuk Kangaroo
     */
    float GetEat();
    /**
     * @brief Getter what_i_eat
     * Mengembalikan jenis makanan Kangaroo
     * @return jenis makanan Kangaroo
     */
    char GetWEat();

};

#endif
