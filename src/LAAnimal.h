// File: Animal.h


#include <string>
#include "Animal.h"
#ifndef LAANIMAL_H
#define LAANIMAL_H
using namespace std;

class LAAnimal : public Animal {
public:
	/**
	 * @brief Constructor.
	 * Menciptakan Animal kosong.
	 */
	LAAnimal(int x, int y, int id);

	/**
	 * @brief Destructor.
	 */
	~LAAnimal();

	/**
	 * @brief Overloading Operator "="
	 * Menambahkan fungsi pada operator "=" agar penyalinan tidak terjadi secara bit size
	 * @param a adalah LAAnimal yang hendak disalin
	 */
	LAAnimal& operator=(const LAAnimal& a);
	/**
	 * @brief Function interact
	 * Interact pada binatang berupa string
	 */
	virtual string interact()=0;

	void move(int);

protected:
	const int size=2;

};
#endif
