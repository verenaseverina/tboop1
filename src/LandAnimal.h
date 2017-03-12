// File: Animal.h


#include <string>
#include "Animal.h"
#ifndef LANDANIMAL_H
#define LANDANIMAL_H
using namespace std;

class LandAnimal : public Animal {
public:
	/**
	 * @brief Constructor.
	 * Menciptakan Animal kosong.
	 */
	LandAnimal(int x, int y, int id);

	/**
	 * @brief Destructor.
	 */
	~LandAnimal();

	/**
	 * @brief Overloading Operator "="
	 * Menambahkan fungsi pada operator "=" agar penyalinan tidak terjadi secara bit size
	 * @param c adalah Animal yang hendak disalin
	 */
	LandAnimal& operator=(const LandAnimal& a);

	virtual void interact()=0;

	void move(int);

protected:
	const int size=1;

};
#endif
