// File: Animal.h


#include <string>
#include "Animal.h"
#ifndef AIRANIMAL_H
#define AIRANIMAL_H
using namespace std;

class AirAnimal : public Animal {
public:
	/**
	 * @brief Constructor.
	 * Menciptakan Animal kosong.
	 */
	AirAnimal(int x, int y, int id);

	/**
	 * @brief CopyConstructor.
	 * Membuat salinan dari Animal lain ke objek
	 * @param c adalah Animal yang hendak disalin
	 */
	AirAnimal(const AirAnimal& a);

	/**
	 * @brief Destructor.
	 */
	~AirAnimal();

	/**
	 * @brief Overloading Operator "="
	 * Menambahkan fungsi pada operator "=" agar penyalinan tidak terjadi secara bit size
	 * @param c adalah Animal yang hendak disalin
	 */
	AirAnimal& operator=(const AirAnimal& a);

	virtual void interact()=0;

	virtual void move(int);

protected:
	const string hab="Air";

};
#endif
