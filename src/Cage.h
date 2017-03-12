// File: Cage.h

#include "Habitat.h"
#include "Animal.h"
#include "Tiger.h"
#include "Panda.h"
#include "Anoa.h"
#include "Rhino.h"
#include "Kangaroo.h"
#include "Dolphin.h"
#include "Whale.h"
#include "Shark.h"
#include "Bat.h"
#include "Eagle.h"
#include "Toucan.h"
#include "Penguin.h"
#include "Crocodile.h"
#include "Hippo.h"
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

	void addAnimal(char animal);

private:
	Habitat* h;
	Animal** a;
	int size;
	static int Neff;
};
#endif