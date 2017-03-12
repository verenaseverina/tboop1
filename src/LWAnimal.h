// File: Animal.h


#include <string>
#include "Animal.h"
#ifndef LWANIMAL_H
#define LWANIMAL_H
using namespace std;

class LWAnimal : public Animal {
public:
	/**
	 * @brief Constructor.
	 * Menciptakan Animal kosong.
	 */
	LWAnimal(int x, int y,int id);

	/**
	 * @brief Destructor.
	 */
	~LWAnimal();

	/**
	 * @brief Overloading Operator "="
	 * Menambahkan fungsi pada operator "=" agar penyalinan tidak terjadi secara bit size
	 * @param c adalah Animal yang hendak disalin
	 */
	LWAnimal& operator=(const LWAnimal& a);

	virtual void interact()=0;

	void move(int);

protected:
	const int size=2;

};
#endif
