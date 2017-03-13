// File: renderable.h
#ifndef RENDERABLE_H
#define RENDERABLE_H

#include "zoo.h"
#include <bits/stdc++.h>

class Renderable {
public:
	/**
	 * @brief Method Render
	 * Meng-print virtual_zoo ke layar
	 * @param virtual_zoo adalah Zoo yang hendak diprint
	 */
	void Render(Zoo& virtual_zoo);
	/**
	 * @brief Method IsThereAnimal
	 * Mencari Animal berada di Cell input
	 * @param virtual_zoo adalah Zoo yang memuat Cell dan Animal
	 * @param x adalah absis dari Zoo yang ingin dicek apakah ada Animal
	 * @param y adalah ordinat dari Zoo yang ingin dicek apakah ada Animal
	 * @return indeks dari Cage tempat Animal berada
	 */
	int IsThereAnimal(Zoo& virtual_zoo, int x, int y);
	/**
	 * @brief Method FindAnimal
	 * Mencari Animal mana yang berada pada Cage dan Cell input
	 * @param virtual_zoo adalah Zoo yang memuat Cell dan Animal
	 * @param i adalah indeks dari Cage tempat Animal berada
	 * @param x adalah absis dari Zoo tempat Animal berada
	 * @param y adalah ordinat dari Zoo tempat Animal berada
	 * @return indeks dari Animal tersebut di array of pointer to Animal di Cage
	 */
	int FindAnimal(Zoo& virtual_zoo, int i, int x, int y);
};
#endif
