// File: animal.h

#ifndef ANIMAL_H
#define ANIMAL_H
#include <string>
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
	string interact();
	/**
	 * @brief Procedure move
	 * Pergerakan binatang dari point ke point yang dituju berdasarkan int yang dipilih
	 * @param int dir adalah pilihan swicth untuk 1.moveup 2.moveright 3.movedown 4.moveleft
	 */
	void move(int);

	int GetSize();

	char GetContent();

	string interact();

	float GetWeight();

	float GetEat();

	int GetID();

	int GetWEat();

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

	bool GetTame();

	char* GetHab();

protected:
	string interaction;
	char content;
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
