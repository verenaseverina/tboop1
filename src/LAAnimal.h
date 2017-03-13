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
	 * Menciptakan Land Air Animal kosong.
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
	virtual LAAnimal& operator=(const LAAnimal& a);
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


protected:
	const int size=2;

};
#endif
