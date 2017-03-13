// File: air_animal.h


#ifndef AIR_ANIMAL_H
#define AIR_ANIMAL_H
#include <string>
#include "animal.h"
using namespace std;

class AirAnimal : public Animal {
public:
	/**
	 * @brief Constructor.
	 * Menciptakan Animal kosong.
	 * @param x adalah absis, y adalah oordinat, id adalah idcage
	 */
	AirAnimal(int x, int y, int id);
	/**
	 * @brief Destructor.
	 */
	~AirAnimal();
	/**
	 * @brief Overloading Operator "="
	 * Menambahkan fungsi pada operator "=" agar penyalinan tidak terjadi secara bit size
	 * @param a adalah AirAnimal yang hendak disalin
	 */
	virtual AirAnimal& operator=(const AirAnimal& a);
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
	/**
	 *  @brief Getter Size
	 *  Mengembalikan ukuran size habitat yang bisa ditinggali oleh hewan (1/2)
	 */
	int GetSize();

	virtual char GetContent()=0;

protected:
	const int size=1;

};
#endif
