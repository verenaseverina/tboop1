// File: Penguin.h


#ifndef PENGUIN_H
#define PENGUIN_H
#include <string>

using namespace std;

class Penguin
{
	public:
		/**
	 	* @brief Constructor.
	 	* Menciptakan Penguin.
	 	*/
		Penguin(int x, int y, int id);
		/**
		 * @brief Destructor.
		 */
		~Penguin();
		/**
		 * @brief Overloading Operator "="
		 * Menambahkan fungsi pada operator "=" agar penyalinan tidak terjadi secara bit size
		 * @param a adalah Penguin yang hendak disalin
		 */
		Penguin& operator=(const Penguin& a);
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