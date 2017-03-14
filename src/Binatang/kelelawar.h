// File: kelelawar.h
#include <string>
#include "../air_animal.h"
#ifndef KELELAWAR_H
#define KELELAWAR_H

using namespace std;

class Kelelawar : public AirAnimal {
  public:
    /**
     * @brief Constructor.
     * Menciptakan Kelelawar.
     */
    Kelelawar(int x, int y, int id);
    /**
     * @brief Overloading Operator "="
     * Menambahkan fungsi pada operator "=" agar penyalinan tidak terjadi secara bit size
     * @param a adalah Kelelawar yang hendak disalin
     */
    Kelelawar& operator=(const Kelelawar& a);
    /**
     * @brief Function interact
     * Interact pada binatang berupa string
     */
    string interact();
    /**
     * @brief Getter Content
     * Mengambil simbol yang menggambarkan spesies Kelelawar
     * @return simbol yang menggambarkan spesies Kelelawar
     */
    char GetContent();
    /**
     * @brief Getter Weight
     * Mengambil Weight dari Kelelawar
     * @return Weight dari Kelelawar
     */
    float GetWeight();
    /**
     * @brief Getter how_much_i_eat
     * Mengembalikan banyaknya jumlah makanan untuk Kelelawar
     * @return banyaknya jumlah makanan untuk Kelelawar
     */
    float GetEat();
    /**
     * @brief Getter what_i_eat
     * Mengembalikan jenis makanan Kelelawar
     * @return jenis makanan Kelelawar
     */
    char GetWEat();
};

#endif
