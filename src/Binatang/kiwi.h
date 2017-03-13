// File: kiwi.h


#include <string>
#include "../land_air_animal.h"
#ifndef KIWI_H
#define KIWI_H

using namespace std;

class Kiwi : public LAAnimal 
{
	public:
		/**
	 	* @brief Constructor.
	 	* Menciptakan Kiwi.
	 	*/
		Kiwi(int x, int y, int id);
		/**
		 * @brief Overloading Operator "="
		 * Menambahkan fungsi pada operator "=" agar penyalinan tidak terjadi secara bit size
		 * @param a adalah Kiwi yang hendak disalin
		 */
		Kiwi& operator=(const Kiwi& a);
		/**
		 * @brief Function interact
		 * Interact pada binatang berupa string
		 */
		string interact();

		/**
		 * @brief Getter Content
		 * Mengambil simbol yang menggambarkan spesies Kiwi
		 * @return simbol yang menggambarkan spesies Kiwi
		 */
		char GetContent();

		/**
		 * @brief Getter Weight
		 * Mengambil Weight dari Kiwi
		 * @return Weight dari Kiwi
		 */
		float GetWeight();

		/**
		 * @brief Getter how_much_i_eat
		 * Mengembalikan banyaknya jumlah makanan untuk Kiwi
		 * @return banyaknya jumlah makanan untuk Kiwi
		 */
		float GetEat();

		/**
		 * @brief Getter what_i_eat
		 * Mengembalikan jenis makanan Kiwi
		 * @return jenis makanan Kiwi
		 */
		char GetWEat();

};

#endif
