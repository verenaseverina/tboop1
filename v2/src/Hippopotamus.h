// File: Hippopotamus.h


#ifndef HIPPOPOTAMUS_H
#define HIPPOPOTAMUS_H
#include <string>

using namespace std;

class Hippopotamus
{
	public:
		/**
	 	* @brief Constructor.
	 	* Menciptakan Tiger.
	 	*/
		Hippopotamus(int x, int y, int id);
		/**
		 * @brief Destructor.
		 */
		~Hippopotamus();
		/**
		 * @brief Overloading Operator "="
		 * Menambahkan fungsi pada operator "=" agar penyalinan tidak terjadi secara bit size
		 * @param a adalah Hippopotamus yang hendak disalin
		 */
		Hippopotamus& operator=(const Hippopotamus& a);
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