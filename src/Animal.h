// File: Animal.h

#include <string>
#ifndef ANIMAL_H
#define ANIMAL_H
using namespace std;

class Animal {
public:
	/**
	 * @brief Constructor.
	 * Menciptakan Animal kosong.
	 */
	Animal(int x, int y);

	/**
	 * @brief CopyConstructor.
	 * Membuat salinan dari Animal lain ke objek
	 * @param c adalah Animal yang hendak disalin
	 */
	Animal(const Animal& a);

	/**
	 * @brief Destructor.
	 */
	~Animal();

	/**
	 * @brief Overloading Operator "="
	 * Menambahkan fungsi pada operator "=" agar penyalinan tidak terjadi secara bit size
	 * @param c adalah Animal yang hendak disalin
	 */
	Animal& operator=(const Animal& a);

	void interact();

	void move();

protected:
	string interaction;
	int animal_id;
	Habitat* whereToMove;
	Habitat whereILive;
	int myWeight;
	int howMuchIEat; // ini dihitung dari myWeight
	char whatIEat;
	bool isTame;
};
#endif
