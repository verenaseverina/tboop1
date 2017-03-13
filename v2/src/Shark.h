// File: Shark.h


#ifndef SHARK_H
#define SHARK_H
#include <string>

using namespace std;

class Shark 
{
	public:
		/**
	 	* @brief Constructor.
	 	* Menciptakan Shark.
	 	*/
		Shark(int x, int y, int id);
		/**
		 * @brief Destructor.
		 */
		~Shark();
		/**
		 * @brief Overloading Operator "="
		 * Menambahkan fungsi pada operator "=" agar penyalinan tidak terjadi secara bit size
		 * @param a adalah Shark yang hendak disalin
		 */
		Shark& operator=(const Shark& a);
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