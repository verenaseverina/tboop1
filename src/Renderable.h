// File: Renderable.h
#include "Zoo.h"
#include <bits/stdc++.h>

#ifndef RENDERABLE_H
#define RENDERABLE_H

class Renderable {
public:
	/**
	 * @brief Method Render
	 * Meng-print virtualzoo ke layar
	 * @param virtualzoo adalah Zoo yang hendak diprint
	 */
	void Render(Zoo& virtualzoo);
	/**
	 * @brief Method IsThereAnimal
	 * Mencari Animal berada di Cell input
	 * @param virtualzoo adalah Zoo yang memuat Cell dan Animal
	 * @param x adalah absis dari Zoo yang ingin dicek apakah ada Animal
	 * @param y adalah ordinat dari Zoo yang ingin dicek apakah ada Animal
	 * @return indeks dari Cage tempat Animal berada
	 */
	int IsThereAnimal(Zoo& virtualzoo, int x, int y);
	/**
	 * @brief Method FindAnimal
	 * Mencari Animal mana yang berada pada Cage dan Cell input
	 * @param virtualzoo adalah Zoo yang memuat Cell dan Animal
	 * @param i adalah indeks dari Cage tempat Animal berada
	 * @param x adalah absis dari Zoo tempat Animal berada
	 * @param y adalah ordinat dari Zoo tempat Animal berada
	 * @return indeks dari Animal tersebut di array of pointer to Animal di Cage
	 */
	int FindAnimal(Zoo& virtualzoo, int i, int x, int y);
};
#endif
