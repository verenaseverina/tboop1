//File: Zoo.h

#ifndef ZOO_H
#define ZOO_H

class Zoo
{
public:
	//Constructor Zoo
	Zoo(State);
	
	Zoo(const Zoo&);
	
	&Zoo operator= (Zoo&);
	
	~Zoo();
	
	//Elemen constructor
	//Pindahin semua State ke map
	void DefineCell(State);
	//
	void DefineCages();
private:
	Cage* cages;
	Cell** map;
	int height;
	int width;
}