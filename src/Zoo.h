//File: Zoo.h

#ifndef ZOO_H
#define ZOO_H

#include <vector>
#include "../State.h"
#include "Cage.h"
#include "Cell.h"
#include "Habitat.h"
#include "Facility.h"
class Zoo
{
public:
	/**
	 * @brief Constructor.
	 * Menginisialisasi map dan cage.
	 */
	Zoo();
	
	/**
	 * @brief Copy Constructor.
	 * Membuat salinan dari Zoo lain ke objek
	 * @param z adalah Zoo yang hendak disalin
	 */	
	Zoo(const Zoo& z);
	
	
	/**
     * @brief Overloading Operator "="
     * Menambahkan fungsi pada operator "=" agar penyalinan tidak terjadi secara bit wise
	 * @param z adalah Zoo yang hendak disalin
	 */
	Zoo& operator= (Zoo& z);
	
	/**
     * @brief Destructor
     * Melakukan dealokasi pada cage dan map
     */ 
	~Zoo();
	
	/**
	 * @brief Method GetAllCage
     * Mengisi semua cage dari input state
	 * @param s adalah kelas state yang berisi map zoo 
	 */
	void GetAllCage(State& s);
	
	/**
	 * @brief Method GetCage
	 * Mengisi sebuah cage dengan pendekatan BFS 
	 * @param h adalah koordinat awal habitat
	 */
	vector<Habitat> GetCage(Cell* h);
	
	/**
	 * @brief Method Incage
	 * Mengeluarkan output apakah sebuah cage telah dikunjungi
	 * @param v adalah kumpulan habitat yang telah dikunjungi
	 * @param h adalah habitat yang ingin dilakukan pengecekan
	 */
	bool InCage(vector<Habitat>& v, Cell* c);
	
	/**
	 * @brief Getter Map
	 * Mengembalikan matriks map dari Zoo
	 * @return matriks map dari Zoo
	 */
	Cel*** GetMap();

	/**
	 * @brief Method GetHeight
	 * Mengembalikan tinggi dari zoo
	 */
	int GetHeight();
	
	/**
	 * @brief Method GetWidth
	 * Mengembalikan lebar dari zoo
	 */
	int GetWidth();
	
	//Elemen constructor
	//Pindahin semua State ke map
	//void MasukkanAnimal();
	//void CekCage(int* arr,Animal H);
private:
	vector<Cage> cages;
	Cell*** map;
	int height;
	int width;
};

#endif
