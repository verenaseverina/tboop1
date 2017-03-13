// File: Dolphin.h


#ifndef DOLPHIN_H
#define DOLPHIN_H
#include <string>

using namespace std;

class Dolphin
{
	public:
		/**
	 	* @brief Constructor.
	 	* Menciptakan Dolphin.
	 	*/
		Dolphin(int x, int y, int id);
		/**
		 * @brief Destructor.
		 */
		~Dolphin();
		/**
		 * @brief Overloading Operator "="
		 * Menambahkan fungsi pada operator "=" agar penyalinan tidak terjadi secara bit size
		 * @param a adalah Dolphin yang hendak disalin
		 */

		Dolphin& operator=(const Dolphin& a);
		/**
		 * @brief Function interact
		 * Interact pada binatang berupa string
		 */
		string interact();
		
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

		bool GetTame();

		char* GetHab();

	private:
		string interaction;
	    int x;
	    int y;
	    int cageID;
		float myWeight;
		float howMuchIEat; // ini dihitung dari myWeight
		char whatIEat;
		bool isTame;
		char* hab;
		int size;
};

#endif