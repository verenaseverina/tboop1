// File: Panda.h


#ifndef PANDA_H
#define PANDA_H
#include <string>

using namespace std;

class Panda 
{
	public:
		/**
	 	* @brief Constructor.
	 	* Menciptakan Panda.
	 	*/
		Panda(int x, int y, int id);
		/**
		 * @brief Destructor.
		 */
		~Panda();
		/**
		 * @brief Overloading Operator "="
		 * Menambahkan fungsi pada operator "=" agar penyalinan tidak terjadi secara bit size
		 * @param a adalah Panda yang hendak disalin
		 */
		Panda& operator=(const Panda& a);
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