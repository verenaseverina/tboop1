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

	/**
	* @brief Function interact
	* Interact pada binatang berupa string
	*/
	virtual string interact() = 0;

	void move(int);
	/**
	* @brief Function GetX()
	* Getter x
	*/
	int GetX();
	
	/**
	* @brief Function GetY()
	* Getter y
	*/
	int GetY();

protected:
	string interaction;
    int x;
    int y;
    int cageID;
	float myWeight;
	float howMuchIEat; // ini dihitung dari myWeight
	char whatIEat;
	bool isTame;
	char* hab;
};
#endif
