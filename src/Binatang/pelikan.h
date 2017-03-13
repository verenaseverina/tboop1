// File: pelikan.h


#include <string>
#include "../water_air_animal.h"
#ifndef PELIKAN_H
#define PELIKAN_H

using namespace std;

class Pelikan : public WAAnimal 
{
	public:
		/**
	 	* @brief Constructor.
	 	* Menciptakan Pelikan.
	 	*/
		Pelikan(int x, int y, int id);
		/**
		 * @brief Overloading Operator "="
		 * Menambahkan fungsi pada operator "=" agar penyalinan tidak terjadi secara bit size
		 * @param a adalah Pelikan yang hendak disalin
		 */
		Pelikan& operator=(const Pelikan& a);
		/**
		 * @brief Function interact
		 * Interact pada binatang berupa string
		 */
		string interact();

		/**
		 * @brief Getter Content
		 * Mengambil simbol yang menggambarkan spesies Pelikan
		 * @return simbol yang menggambarkan spesies Pelikan
		 */
		char GetContent();

		/**
		 * @brief Getter Weight
		 * Mengambil Weight dari Pelikan
		 * @return Weight dari Pelikan
		 */
		float GetWeight();

		/**
		 * @brief Getter how_much_i_eat
		 * Mengembalikan banyaknya jumlah makanan untuk Pelikan
		 * @return banyaknya jumlah makanan untuk Pelikan
		 */
		float GetEat();

		/**
		 * @brief Getter what_i_eat
		 * Mengembalikan jenis makanan Pelikan
		 * @return jenis makanan Pelikan
		 */
		char GetWEat();

};

#endif
