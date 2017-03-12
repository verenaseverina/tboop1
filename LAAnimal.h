// File: Animal.h


#include <string>
#include "LandAnimal.h"
#include "AirAnimal.h"
#ifndef LAANIMAL_H
#define LAANIMAL_H
using namespace std;

class LAAnimal : public LandAnimal, public AirAnimal {
public:
	/**
	 * @brief Constructor.
	 * Menciptakan Animal kosong.
	 */
	LAAnimal(int x, int y, int id);

	/**
	 * @brief CopyConstructor.
	 * Membuat salinan dari Animal lain ke objek
	 * @param c adalah Animal yang hendak disalin
	 */
	LAAnimal(const LWAnimal& a);

	/**
	 * @brief Destructor.
	 */
	~LAAnimal();

	/**
	 * @brief Overloading Operator "="
	 * Menambahkan fungsi pada operator "=" agar penyalinan tidak terjadi secara bit size
	 * @param c adalah Animal yang hendak disalin
	 */
	LAAnimal& operator=(const LAAnimal& a);

	virtual void interact()=0;

	virtual void move(int);

};
#endif
