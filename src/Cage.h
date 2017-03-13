// File: Cage.h

#include "Habitat.h"
#include "Animal.h"
#include "Binatang/Tiger.h"
#include "Binatang/Panda.h"
#include "Binatang/Anoa.h"
#include "Binatang/Rhino.h"
#include "Binatang/Kangaroo.h"
#include "Binatang/Dolphin.h"
#include "Binatang/Whale.h"
#include "Binatang/Shark.h"
#include "Binatang/Kelelawar.h"
#include "Binatang/ElangB.h"
#include "Binatang/Toucan.h"
#include "Binatang/Penguin.h"
#include "Binatang/Crocodile.h"
#include "Binatang/Hippopotamus.h"
#include <math.h>
#ifndef CAGE_H
#define CAGE_H

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
	 * @brief Overloading Operator "="
	 * Menambahkan fungsi pada operator "=" agar penyalinan tidak terjadi secara bit wise
	 * @param v adalah vektor yang hendak disalin
	 */
	Cage& operator=(const vector<Habitat>& v);

	/**
	 * @brief Getter size
	 * Mengambil size dari Cage
	 * @return size dari Cage
	 */
	int GetSize();

	/**
	 * @brief Getter Array of pointer to Animal
	 * Mengambil array of pointer to Animal
	 * @return array of pointer to Animal
	 */
	int GetAnimal();
	
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
