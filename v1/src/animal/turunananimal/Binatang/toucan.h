// File: toucan.h
#include <string>
#include "../air_animal.h"
#ifndef TOUCAN_H
#define TOUCAN_H

using namespace std;

class Toucan : public AirAnimal {
  public:
    /**
     * @brief Constructor.
     * Menciptakan Toucan.
     */
    Toucan(int x, int y, int id);
    /**
     * @brief Overloading Operator "="
     * Menambahkan fungsi pada operator "=" agar penyalinan tidak terjadi secara bit size
     * @param a adalah Toucan yang hendak disalin
     */
    Toucan& operator=(const Toucan& a);
    /**
     * @brief Function interact
     * Interact pada binatang berupa string
     */
    string Interact();
    /**
     * @brief Getter Content
     * Mengambil simbol yang menggambarkan spesies Toucan
     * @return simbol yang menggambarkan spesies Toucan
     */
    char GetContent();
    /**
     * @brief Getter Weight
     * Mengambil Weight dari Toucan
     * @return Weight dari Toucan
     */
    float GetWeight();
    /**
     * @brief Getter how_much_i_eat
     * Mengembalikan banyaknya jumlah makanan untuk Toucan
     * @return banyaknya jumlah makanan untuk Toucan
     */
    float GetEat();
    /**
     * @brief Getter what_i_eat
     * Mengembalikan jenis makanan Toucan
     * @return jenis makanan Toucan
     */
    char GetWEat();
};

#endif
