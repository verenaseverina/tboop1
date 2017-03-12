// File: Animal.h

#include <string>
#include "Animal.h"
#ifndef WATERANIMAL_H
#define WATERANIMAL_H
using namespace std;

class WaterAnimal : public Animal {
public:
	/**
	 * @brief Constructor.
	 * Menciptakan Animal kosong.
	 */
	WaterAnimal(int x, int y,int id);

	/**
	 * @brief Destructor.
	 */
	~WaterAnimal();

	/**
	 * @brief Overloading Operator "="
	 * Menambahkan fungsi pada operator "=" agar penyalinan tidak terjadi secara bit size
	 * @param c adalah Animal yang hendak disalin
	 */
	WaterAnimal& operator=(const WaterAnimal& a);

	virtual string interact()=0;

	void move(int);

protected:
	const int size=1;

};
#endif
