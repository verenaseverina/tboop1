// File: Cage.h

#include "Habitat.h"
#include "Animal.h"
#include "Parsing.h"
#ifndef CAGE_H
#define CAGE_H

class Cage {
public:
	/**
	 * @brief Constructor.
	 * Menciptakan Cage kosong.
	 */
	Cage(int _size);

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


private:
	Habitat* h;
	Animal* a;
	int size;
};
#endif