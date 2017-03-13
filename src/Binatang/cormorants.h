// File: cormorants.h


#include <string>
#include "../water_air_animal.h"
#ifndef CORMORANTS_H
#define CORMORANTS_H

using namespace std;

class Cormorants : public LandAnimal 
{
  public:
    /**
     * @brief Constructor.
     * Menciptakan Cormorants.
     */
    Cormorants(int x, int y, int id);
    /**
     * @brief Overloading Operator "="
     * Menambahkan fungsi pada operator "=" agar penyalinan tidak terjadi secara bit size
     * @param a adalah Cormorants yang hendak disalin
     */
    Cormorants& operator=(const Cormorants& a);
    /**
     * @brief Function interact
     * Interact pada binatang berupa string
     */
    string interact();
    /**
     * @brief Getter Content
     * Mengambil simbol yang menggambarkan spesies Cormorants
     * @return simbol yang menggambarkan spesies Cormorants
     */
    char GetContent();
    /**
     * @brief Getter Weight
     * Mengambil Weight dari Cormorants
     * @return Weight dari Cormorants
     */
    float GetWeight();
    /**
     * @brief Getter how_much_i_eat
     * Mengembalikan banyaknya jumlah makanan untuk Cormorants
     * @return banyaknya jumlah makanan untuk Cormorants
     */
    float GetEat();
    /**
     * @brief Getter what_i_eat
     * Mengembalikan jenis makanan Cormorants
     * @return jenis makanan Cormorants
     */
    char GetWEat();
};
#endif
