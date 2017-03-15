// File: elang_botak.h


#include <string>
#include "../air_animal.h"
#ifndef ELANGB_H
#define ELANGB_H

using namespace std;

class ElangB : public AirAnimal {
  public:
    /**
	 * @brief Constructor.
	 * Menciptakan ElangB.
	 */
    ElangB(int x, int y, int id);
    /**
     * @brief Overloading Operator "="
     * Menambahkan fungsi pada operator "=" agar penyalinan tidak terjadi secara bit size
     * @param a adalah ElangB yang hendak disalin
     */

    ElangB& operator=(const ElangB& a);
    /**
     * @brief Function interact
     * Interact pada binatang berupa string
     */
    string Interact();
    /**
     * @brief Getter Content
     * Mengambil simbol yang menggambarkan spesies ElangB
     * @return simbol yang menggambarkan spesies ElangB
     */
    char GetContent();
    /**
     * @brief Getter Weight
     * Mengambil Weight dari ElangB
     * @return Weight dari ElangB
     */
    float GetWeight();
    /**
     * @brief Getter how_much_i_eat
     * Mengembalikan banyaknya jumlah makanan untuk ElangB
     * @return banyaknya jumlah makanan untuk ElangB
     */
    float GetEat();
    /**
     * @brief Getter what_i_eat
     * Mengembalikan jenis makanan ElangB
     * @return jenis makanan ElangB
     */
    char GetWEat();

};

#endif
