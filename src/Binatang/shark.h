// File: shark.h
#include <string>
#include "../water_animal.h"
#ifndef SHARK_H
#define SHARK_H

using namespace std;

class Shark : public WaterAnimal {
  public:
    /**
     * @brief Constructor.
     * Menciptakan Shark.
     */
    Shark(int x, int y, int id);
    /**
     * @brief Overloading Operator "="
     * Menambahkan fungsi pada operator "=" agar penyalinan tidak terjadi secara bit size
     * @param a adalah Shark yang hendak disalin
     */
    Shark& operator=(const Shark& a);
    /**
     * @brief Function interact
     * Interact pada binatang berupa string
     */
    string interact();
    /**
     * @brief Getter Content
     * Mengambil simbol yang menggambarkan spesies Shark
     * @return simbol yang menggambarkan spesies Shark
     */
    char GetContent();
    /**
     * @brief Getter Weight
     * Mengambil Weight dari Shark
     * @return Weight dari Shark
     */
    float GetWeight();
    /**
     * @brief Getter how_much_i_eat
     * Mengembalikan banyaknya jumlah makanan untuk Shark
     * @return banyaknya jumlah makanan untuk Shark
     */
    float GetEat();
    /**
     * @brief Getter what_i_eat
     * Mengembalikan jenis makanan Shark
     * @return jenis makanan Shark
     */
    char GetWEat();
};

#endif
