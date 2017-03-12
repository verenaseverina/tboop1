// File: State.h

#include <iostream>
#include <fstream>
#include <string>
#ifndef STATE_H
#define STATE_H

class State {
public:
	/**
	 * @brief Constructor.
	 * Menciptakan State yang diisi dari file eksternal.
	 */
	State();

	/**
	 * @brief Getter Map
	 * Mengambil Matriks Map
	 * @return Matriks Map
	 */
	char** GetMap();

	/**
	 * @brief Getter Height
	 * Mengambil height dari Map
	 * @return height Map
	 */
	int GetHeight();

	/**
	 * @brief Getter Width
	 * Mengambil width dari Map
	 * @return width Map
	 */
	int GetWidth();

private:
	char** map;
	int width;
	int height;
	const int maxcharsperline = 512;
	const int maxtokensperline = 30;
	const char* const DELIMITER = " x";
};
#endif

