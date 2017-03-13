// File: Whale.h


#ifndef WHALE_H
#define WHALE_H
#include <string>

using namespace std;

class Whale
{
	public:
		/**
	 	* @brief Constructor.
	 	* Menciptakan Whale.
	 	*/
		Whale(int x, int y, int id);
		/**
		 * @brief Destructor.
		 */
		~Whale();

		Whale& operator=(const Whale& a);
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