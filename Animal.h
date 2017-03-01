// File: Animal.h

#include <string>
#ifndef ANIMAL_H
#define ANIMAL_H

class Animal {
public:
	/**
	 * @brief Constructor.
	 * Menciptakan Animal kosong.
	 */
	Animal(int x, int y);

	/**
	 * @brief CopyConstructor.
	 * Membuat salinan dari Animal lain ke objek
	 * @param c adalah Animal yang hendak disalin
	 */
	Animal(const Animal& a);

	/**
	 * @brief Destructor.
	 */
	~Animal();

	/**
	 * @brief Overloading Operator "="
	 * Menambahkan fungsi pada operator "=" agar penyalinan tidak terjadi secara bit size
	 * @param c adalah Animal yang hendak disalin
	 */
	Animal& operator=(const Animal& a);

	void interact();

protected:
	string interaction;
	char whereILive;
	int myWeight;
	int animal_pos_row;
	int animal_pos_col;
};
#endif
