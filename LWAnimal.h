// File: Animal.h


#include <string>
#include "LandAnimal.h"
#include "WaterAnimal.h"
#ifndef LWANIMAL_H
#define LWANIMAL_H
using namespace std;

class LWAnimal : public LandAnimal, public WaterAnimal {
public:
	/**
	 * @brief Constructor.
	 * Menciptakan Animal kosong.
	 */
	LWAnimal(int x, int y,int id);

	/**
	 * @brief CopyConstructor.
	 * Membuat salinan dari Animal lain ke objek
	 * @param c adalah Animal yang hendak disalin
	 */
	LWAnimal(const LWAnimal& a);

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

	virtual void move(int);

};
#endif
