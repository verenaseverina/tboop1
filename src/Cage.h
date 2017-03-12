// File: Cage.h

#include "Habitat.h"
#include "Animal.h"
#include <math.h>
#ifndef CAGE_H
#define CAGE_H

class Cage {
public:
	/**
	 * @brief Constructor.
	 * Menciptakan Cage kosong.
	 */
	Cage(int _size, Habitat* buf);

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
	 * Menambahkan fungsi pada operator "=" agar penyalinan tidak terjadi secara bit size
	 * @param c adalah Cage yang hendak disalin
	 */
	Cage& operator=(const Cage& c);

	void addAnimal(char animal, int x, int y); // parameternya ini? ada posisinya iya atau ngga?


private:
	Habitat* h;
	Animal** a;
	int size;
};
#endif