// File: water_nimal.h

#ifndef WATER_ANIMAL_H
#define WATER_ANIMAL_H
#include <string>
#include "animal.h"
using namespace std;

class WaterAnimal : public Animal {
public:
	/**
	 * @brief Constructor.
	 * Menciptakan Water Animal kosong.
	 */
	WaterAnimal(int x, int y,int id);

	/**
	 * @brief Destructor.
	 */
	~WaterAnimal();

	/**
	 * @brief Overloading Operator "="
	 * Menambahkan fungsi pada operator "=" agar penyalinan tidak terjadi secara bit size
	 * @param a adalah Animal yang hendak disalin
	 */
	virtual WaterAnimal& operator=(const WaterAnimal& a);
	/**
	 * @brief Function interact
	 * Interact pada binatang berupa string
	 */
	virtual string interact()=0;
	/**
	 * @brief Procedure move
	 * Pergerakan binatang dari point ke point yang dituju berdasarkan int yang dipilih
	 * @param int dir adalah pilihan swicth untuk 1.moveup 2.moveright 3.movedown 4.moveleft
	 */
	void move(int);
	int GetSize();
	virtual char GetContent() = 0;

protected:
	const int size=1;

};
#endif
