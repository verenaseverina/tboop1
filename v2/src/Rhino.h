// File: Rhino.h


#ifndef RHINO_H
#define RHINO_H
#include <string>

using namespace std;

class Rhino  
{
	public:
		/**
	 	* @brief Constructor.
	 	* Menciptakan Rhino.
	 	*/
		Rhino(int x, int y, int id);
		/**
		 * @brief Destructor.
		 */
		~Rhino();
		/**
		 * @brief Overloading Operator "="
		 * Menambahkan fungsi pada operator "=" agar penyalinan tidak terjadi secara bit size
		 * @param a adalah Rhino yang hendak disalin
		 */
		Rhino& operator=(const Rhino& a);
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