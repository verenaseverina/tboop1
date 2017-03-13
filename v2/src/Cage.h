// File: Cage.h

#ifndef CAGE_H
#define CAGE_H
#include "Habitat.h"
#include "Animal.h"
#include <math.h>

using namespace std;

class Cage {
public:
	/**
	 * @brief Constructor.
	 * Menciptakan Cage kosong.
	 */
	Cage(int _size, vector<Habitat> &buf);

	/**
	 * @brief CopyConstructor.
	 * Membuat salinan dari Cage lain ke objek
	 * @param c adalah Cage yang hendak disalin
	 */
	Cage(const Cage& c);

	/**
	 * @brief Destructor.
	 */
	~Cage();

	/**
	 * @brief Overloading Operator "="
	 * Menambahkan fungsi pada operator "=" agar penyalinan tidak terjadi secara bit wise
	 * @param c adalah Cage yang hendak disalin
	 */
	Cage& operator=(const Cage& c);

	/**
	 * @brief Method addAnimal
	 * Menambahkan animal ke dalam array of animal
	 * @param animal jenis animal yang ingin dimasukkan ke dalam Cage
	 */
	void addAnimal(char animal, int i);

	/**
	 * @brief Method containAnimals
	 * Mengecek apakah terdapat animal pada Habitat tersebut
	 * @param x adalah absis dari Habitat yang ingin dicek
	 * @param y adalah ordinat dari Habitat yang ingin dicek
	 * @return boolean apakah ada animal pada Habitat yang dicek 
	 */
	bool containAnimal(int x, int y);
	
	/**
	 * @brief Method isFull
	 * Mengecek apakah Cage penuh dengan Animal
	 * @return boolean apakah Cage penuh dengan Animal
	 */
	bool isFull();

	/**
	 * @brief Method isEmpty
	 * Mengecek apakah Cage tidak memiliki Animal
	 * @return boolean apakah Cage memiliki Animal
	 */
	bool isEmpty();

private:
	Habitat* h;
	Animal** a;
	int size;
	static int Neff;
};
#endif
