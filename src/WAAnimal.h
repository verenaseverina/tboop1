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
	 * Menciptakan Animal kosong.
	 */
	WAAnimal(int x, int y,int id);

	/**
	 * @brief Destructor.
	 */
	~WAAnimal();

	/**
	 * @brief Overloading Operator "="
	 * Menambahkan fungsi pada operator "=" agar penyalinan tidak terjadi secara bit size
	 * @param c adalah Animal yang hendak disalin
	 */
	WAAnimal& operator=(const WAAnimal& a);

	virtual void interact()=0;

	void move(int);

protected:
	const int size=2;

};
#endif
