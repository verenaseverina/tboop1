// File: rhino.h
#include <string>
#include "../land_animal.h"
#ifndef RHINO_H
#define RHINO_H

using namespace std;

class Rhino : public LandAnimal {
  public:
    /**
     * @brief Constructor.
     * Menciptakan Rhino.
     */
    Rhino(int x, int y, int id);
    /**
     * @brief Overloading Operator "="
     * Menambahkan fungsi pada operator "=" agar penyalinan tidak terjadi secara bit size
     * @param a adalah Rhino yang hendak disalin
     */
    Rhino& operator=(const Rhino& a);
    /**
     * @brief Function interact
     * Interact pada binatang berupa string
     */
    string interact();
    /**
     * @brief Getter Content
     * Mengambil simbol yang menggambarkan spesies Rhino
     * @return simbol yang menggambarkan spesies Rhino
     */
    char GetContent();
    /**
     * @brief Getter Weight
     * Mengambil Weight dari Rhino
     * @return Weight dari Rhino
     */
    float GetWeight();
    /**
     * @brief Getter how_much_i_eat
     * Mengembalikan banyaknya jumlah makanan untuk Rhino
     * @return banyaknya jumlah makanan untuk Rhino
     */
    float GetEat();
    /**
     * @brief Getter what_i_eat
     * Mengembalikan jenis makanan Rhino
     * @return jenis makanan Rhino
     */
    char GetWEat();
};

#endif
