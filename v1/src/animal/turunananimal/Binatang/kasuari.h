// File: kasuari.h
#include <string>
#include "../land_air_animal.h"
#ifndef KASUARI_H
#define KASUARI_H

using namespace std;

class Kasuari : public LAAnimal {
  public:
    /**
     * @brief Constructor.
     * Menciptakan Kasuari.
     */
  	Kasuari(int x, int y, int id);
    /**
     * @brief Overloading Operator "="
     * Menambahkan fungsi pada operator "=" agar penyalinan tidak terjadi secara bit size
     * @param a adalah Kasuari yang hendak disalin
     */
  	Kasuari& operator=(const Kasuari& a);
  	/**
  	 * @brief Function interact
  	 * Interact pada binatang berupa string
  	 */
  	string Interact();
  	/**
     * @brief Getter Content
     * Mengambil simbol yang menggambarkan spesies Kasuari
     * @return simbol yang menggambarkan spesies Kasuari
     */
    char GetContent();
    /**
     * @brief Getter Weight
     * Mengambil Weight dari Kasuari
     * @return Weight dari Kasuari
     */
    float GetWeight();
    /**
     * @brief Getter how_much_i_eat
     * Mengembalikan banyaknya jumlah makanan untuk Kasuari
     * @return banyaknya jumlah makanan untuk Kasuari
     */
    float GetEat();
    /**
     * @brief Getter what_i_eat
     * Mengembalikan jenis makanan Kasuari
     * @return jenis makanan Kasuari
     */
    char GetWEat();
};

#endif
