// File: anoa.h
#include <string>
#include "../land_animal.h"
#ifndef ANOA_H
#define ANOA_H

using namespace std;

class Anoa : public LandAnimal {
  public:
    /**
	* @brief Constructor.
	* Menciptakan Anoa.
	*/
    Anoa(int x, int y, int id);
    /**
     * @brief Overloading Operator "="
     * Menambahkan fungsi pada operator "=" agar penyalinan tidak terjadi secara bit size
     * @param a adalah Anoa yang hendak disalin
     */
    Anoa& operator=(const Anoa& a);
    /**
     * @brief Function interact
     * Interact pada binatang berupa string
     */
    string Interact();
    /**
     * @brief Getter Content
     * Mengambil simbol yang menggambarkan spesies Anoa
     * @return simbol yang menggambarkan spesies Anoa
     */
    char GetContent();
    /**
     * @brief Getter Weight
     * Mengambil Weight dari Anoa
     * @return Weight dari Anoa
     */
    float GetWeight();
    /**
     * @brief Getter how_much_i_eat
     * Mengembalikan banyaknya jumlah makanan untuk Anoa
     * @return banyaknya jumlah makanan untuk Anoa
     */
    float GetEat();
    /**
     * @brief Getter what_i_eat
     * Mengembalikan jenis makanan Anoa
     * @return jenis makanan Anoa
     */
    char GetWEat();
};

#endif
