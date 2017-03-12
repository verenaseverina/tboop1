#include "Cage.h"
#include "Queue.h"

Cage::Cage(int _size, Habitat* buf) : size(_size)
{
	h = new Habitat[size];
	for (int i = 0; i < size; i++)
	{
		h[i] = buf[i];
	}

	// ini dapet buf dari zoo terus dia sekalian itung size
}

Cage::Cage(const Cage& c)
{

}

Cage::~Cage()
{

}

Cage& Cage::operator=(const Cage& c)
{

}