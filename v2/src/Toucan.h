// File: Toucan.h


#ifndef TOUCAN_H
#define TOUCAN_H
#include <string>

using namespace std;

class Toucan
{
	public:
		/**
	 	* @brief Constructor.
	 	* Menciptakan Toucan.
	 	*/
		Toucan(int x, int y, int id);
		/**
		 * @brief Destructor.
		 */
		~Toucan();
		/**
		 * @brief Overloading Operator "="
		 * Menambahkan fungsi pada operator "=" agar penyalinan tidak terjadi secara bit size
		 * @param a adalah Toucan yang hendak disalin
		 */
		Toucan& operator=(const Toucan& a);
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