// File: Animal.h


#include <string>
#include "AirAnimal.h"
#include "LandAnimal.h"
#ifndef WAANIMAL_H
#define WAANIMAL_H
using namespace std;

class LAAnimal : public WaterAnimal, public AirAnimal {
public:
	/**
	 * @brief Constructor.
	 * Menciptakan Animal kosong.
	 */
	WAAnimal(int x, int y,int id);

	/**
	 * @brief CopyConstructor.
	 * Membuat salinan dari Animal lain ke objek
	 * @param c adalah Animal yang hendak disalin
	 */
	WAAnimal(const LWAnimal& a);

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

	virtual void move(int);

};
#endif
