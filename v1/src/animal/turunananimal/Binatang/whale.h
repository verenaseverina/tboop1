// File: whale.h
#include <string>
#include "../water_animal.h"
#ifndef WHALE_H
#define WHALE_H

using namespace std;

class Whale : public WaterAnimal {
  public:
    /**
     * @brief Constructor.
     * Menciptakan Whale.
     */
    Whale(int x, int y, int id);
    /**
     * @brief Overloading Operator "="
     * Menambahkan fungsi pada operator "=" agar penyalinan tidak terjadi secara bit size
     * @param a adalah Whale yang hendak disalin
     */
    Whale& operator=(const Whale& a);
    /**
     * @brief Function interact
     * Interact pada binatang berupa string
     */
    string Interact();
    /**
     * @brief Getter Content
     * Mengambil simbol yang menggambarkan spesies Whale
     * @return simbol yang menggambarkan spesies Whale
     */
    char GetContent();
    /**
     * @brief Getter Weight
     * Mengambil Weight dari Whale
     * @return Weight dari Whale
     */
    float GetWeight();
    /**
     * @brief Getter how_much_i_eat
     * Mengembalikan banyaknya jumlah makanan untuk Whale
     * @return banyaknya jumlah makanan untuk Whale
     */
    float GetEat();
    /**
     * @brief Getter what_i_eat
     * Mengembalikan jenis makanan Whale
     * @return jenis makanan Whale
     */
    char GetWEat();
};

#endif
