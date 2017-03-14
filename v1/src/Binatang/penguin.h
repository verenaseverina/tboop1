// File: penguin.h
#include <string>
#include "../land_water_animal.h"
#ifndef PENGUIN_H
#define PENGUIN_H

using namespace std;

class Penguin : public LWAnimal {
  public:
    /**
     * @brief Constructor.
     * Menciptakan Penguin.
     */
    Penguin(int x, int y, int id);
    /**
     * @brief Overloading Operator "="
     * Menambahkan fungsi pada operator "=" agar penyalinan tidak terjadi secara bit size
     * @param a adalah Penguin yang hendak disalin
     */
    Penguin& operator=(const Penguin& a);
    /**
     * @brief Function interact
     * Interact pada binatang berupa string
     */
    string Interact();
    /**
     * @brief Getter Content
     * Mengambil simbol yang menggambarkan spesies Penguin
     * @return simbol yang menggambarkan spesies Penguin
     */
    char GetContent();
    /**
     * @brief Getter Weight
     * Mengambil Weight dari Penguin
     * @return Weight dari Penguin
     */
    float GetWeight();
    /**
     * @brief Getter how_much_i_eat
     * Mengembalikan banyaknya jumlah makanan untuk Penguin
     * @return banyaknya jumlah makanan untuk Penguin
     */
    float GetEat();
    /**
     * @brief Getter what_i_eat
     * Mengembalikan jenis makanan Penguin
     * @return jenis makanan Penguin
     */
    char GetWEat();
};

#endif
