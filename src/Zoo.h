//File: Zoo.h

#ifndef ZOO_H
#define ZOO_H

#include <vector>
#include "../State.h"
#include "Cage.h"
#include "Cell.h"

class Zoo
{
public:
	//Constructor Zoo
	Zoo();
	
	Zoo(const Zoo&);
	
	&Zoo operator= (Zoo&);
	
	~Zoo();
	
	void GetAllCage(State& s);
	
	vector<Habitat> GetCage(Habitat h);
	
	bool InCage(vector<Habitat> &v, Habitat h);
	
	bool InCage(vector<Habitat> &v, Facility f);
	
	int GetHeight();
	
	int GetWidth();
	
	//Elemen constructor
	//Pindahin semua State ke map
private:
	//Cage* cages;
	Cell** map;
	int height;
	int width;
}
