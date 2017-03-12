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
	Animal(int _x, int _y, int id);

	/**
	 * @brief CopyConstructor.
	 * Membuat salinan dari Animal lain ke objek
	 * @param c adalah Animal yang hendak disalin
	 */
//	Animal(const Animal& a);
//  Sepertinya tidak perlu, tinggal di bitwise copy

	/**
	 * @brief Destructor.
	 */
//	~Animal();
//  Tidak ada variabel dinamik

	/**
	 * @brief Overloading Operator "="
	 * Menambahkan fungsi pada operator "=" agar penyalinan tidak terjadi secara bit wise
	 * @param a adalah Animal yang hendak disalin
	 */
	Animal& operator=(const Animal& a);

	virtual void interact() = 0;

	void move(int);

protected:
	string interaction;
	int animal_id;
	int x;
	int y;
    int cageID;
	int myWeight;
	int howMuchIEat; // ini dihitung dari myWeight
	char whatIEat;
	bool isTame;
};
#endif
