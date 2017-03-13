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
	 * Menciptakan Land Animal kosong.
	 */
	LandAnimal(int x, int y, int id);

	/**
	 * @brief Destructor.
	 */
	~LandAnimal();

	/**
	 * @brief Overloading Operator "="
	 * Menambahkan fungsi pada operator "=" agar penyalinan tidak terjadi secara bit size
	 * @param a adalah Animal yang hendak disalin
	 */
	virtual LandAnimal& operator=(const LandAnimal& a);
	/**
	 * @brief Function interact
	 * Interact pada binatang berupa string
	 */
	virtual string interact()=0;

	void move(int);

	int GetSize();

	virtual char GetContent() = 0;

protected:
	const int size=1;

};
#endif
