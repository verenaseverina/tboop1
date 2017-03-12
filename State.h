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

private:
	char** map;
	int width;
	int height;
	const int maxcharsperline = 512;
	const int maxtokensperline = 30;
	const char* const DELIMITER = " x";
};
#endif

