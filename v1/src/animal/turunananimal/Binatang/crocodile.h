// File: crocodile.h
#include <string>
#include "../land_water_animal.h"
#ifndef CROCODILE_H
#define CROCODILE_H

using namespace std;

class Crocodile : public LWAnimal {
  public:
    /**
	 * @brief Constructor.
	 * Menciptakan Crocodile.
	 */
    Crocodile(int x, int y, int id);
    /**
     * @brief Overloading Operator "="
     * Menambahkan fungsi pada operator "=" agar penyalinan tidak terjadi secara bit size
     * @param a adalah Crocodile yang hendak disalin
     */
    Crocodile& operator=(const Crocodile& a);
    /**
     * @brief Function interact
     * Interact pada binatang berupa string
     */
    string Interact();
    /**
     * @brief Getter Content
     * Mengambil simbol yang menggambarkan spesies Crocodile
     * @return simbol yang menggambarkan spesies Crocodile
     */
    char GetContent();
    /**
     * @brief Getter Weight
     * Mengambil Weight dari Crocodile
     * @return Weight dari Crocodile
     */
    float GetWeight();
    /**
     * @brief Getter how_much_i_eat
     * Mengembalikan banyaknya jumlah makanan untuk Crocodile
     * @return banyaknya jumlah makanan untuk Crocodile
     */
    float GetEat();
    /**
     * @brief Getter what_i_eat
     * Mengembalikan jenis makanan Crocodile
     * @return jenis makanan Crocodile
     */
    char GetWEat();

};

#endif

