// File: Anoa.h


#ifndef ANOA_H
#define ANOA_H
#include <string>

using namespace std;

class Anoa 
{
	public:
		/**
	 	* @brief Constructor.
	 	* Menciptakan Tiger.
	 	*/
		Anoa(int x, int y, int id);
		/**
		 * @brief Destructor.
		 */
		~Anoa();
		/**
		 * @brief Overloading Operator "="
		 * Menambahkan fungsi pada operator "=" agar penyalinan tidak terjadi secara bit size
		 * @param a adalah Anoa yang hendak disalin
		 */
		Anoa& operator=(const Anoa& a);
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