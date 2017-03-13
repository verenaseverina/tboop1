// File: Animal.h


#include <string>
#include "Animal.h"
#ifndef WAANIMAL_H
#define WAANIMAL_H
using namespace std;

class WAAnimal : public Animal {
public:
	/**
	 * @brief Constructor.
	 * Menciptakan Water Air Animal kosong.
	 */
	WAAnimal(int x, int y,int id);

	/**
	 * @brief Destructor.
	 */
	~WAAnimal();

	/**
	 * @brief Overloading Operator "="
	 * Menambahkan fungsi pada operator "=" agar penyalinan tidak terjadi secara bit size
	 * @param a adalah Animal yang hendak disalin
	 */
	WAAnimal& operator=(const WAAnimal& a);
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

protected:
	const int size=2;

};
#endif
