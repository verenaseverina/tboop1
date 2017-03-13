#include "Cage.h"
#include <bits/stdc++.h>
//using namespace std;

int Cage::Neff = -1;

Cage::Cage(int _size, vector<Habitat> &buf) : size(buf.size())
{
	h = new Habitat[buf.size()];
	for (int i = 0; i < size; i++)
	{
		h[i] = buf[i];
	}
	
	float tempManyAnimal = 0.3 * size;
	int manyAnimal = floor(tempManyAnimal);
	a = new Animal*[manyAnimal];
}

Cage::Cage(const Cage& c) : size(c.size)
{
	h = new Habitat[c.size];
	int i;
	for (i = 0; i < size; i++)
	{
		h[i] = c.h[i];
	}

	float tempManyAnimal = 0.3 * c.size;
	int manyAnimal = floor(tempManyAnimal);
	a = new Animal*[manyAnimal];

	for (i = 0; i < manyAnimal; i++)
	{
		a[i] = c.a[i];
	}
}

Cage::~Cage()
{
	delete h;
	/*float tempManyAnimal = 0.3 * size;
	int manyAnimal = floor(tempManyAnimal);
	for (int i = 0; i < manyAnimal; i++)
	{
		delete a[i];
	}*/
	delete a;
}

Cage& Cage::operator=(const Cage& c)
{
	delete [] h;
	delete [] a;
	h = new Habitat[c.size];
	int i;
	for (i = 0; i < size; i++)
	{
		h[i] = c.h[i];
	}

	float tempManyAnimal = 0.3 * c.size;
	int manyAnimal = floor(tempManyAnimal);
	a = new Animal*[manyAnimal];

	for (i = 0; i < manyAnimal; i++)
	{
		a[i] = c.a[i];
	}

	return *this;
}

Cage& Cage::operator=(const vector<Habitat>& v)
{
	delete [] h;
	h = new Habitat[v.size()];
	for (int i = 0; i < size; i++)
	{
		h[i] = v[i];
	}

	return *this;
}

int Cage::GetSize()
{
	return size;
}

Animal** Cage::GetAnimal()
{
	return a;
}

void Cage::addAnimal(char animal, int i)
{	
	int posid;
	srand(time(NULL));
	do
	{
		posid = rand() % size;
	} while (!containAnimal(h[posid].GetCellRow(), h[posid].GetCellCol()));

	switch(animal)
	{
		case 'H' :
			a[Neff++] = new Tiger(h[posid].GetCellRow(), h[posid].GetCellCol(), i);
			break;
		case 'B' :
			a[Neff++] = new Panda(h[posid].GetCellRow(), h[posid].GetCellCol(), i);
			break;
		case 'A' :
			a[Neff++] = new Anoa(h[posid].GetCellRow(), h[posid].GetCellCol(), i);
			break;
		case 'R' :
			a[Neff++] = new Rhino(h[posid].GetCellRow(), h[posid].GetCellCol(), i);
			break;
		case 'D' :
			a[Neff++] = new Kangaroo(h[posid].GetCellRow(), h[posid].GetCellCol(), i);
			break;
		case 'L' :
			a[Neff++] = new Dolphin(h[posid].GetCellRow(), h[posid].GetCellCol(), i);
			break;
		case 'W' :
			a[Neff++] = new Whale(h[posid].GetCellRow(), h[posid].GetCellCol(), i);
			break;
		case 'S' :
			a[Neff++] = new Shark(h[posid].GetCellRow(), h[posid].GetCellCol(), i);
			break;
		case 'K' :
			a[Neff++] = new Kelelawar(h[posid].GetCellRow(), h[posid].GetCellCol(), i);
			break;
		case 'E' :
			a[Neff++] = new ElangB(h[posid].GetCellRow(), h[posid].GetCellCol(), i);
			break;
		case 'T' :
			a[Neff++] = new Toucan(h[posid].GetCellRow(), h[posid].GetCellCol(), i);
			break;
		case 'P' :
			a[Neff++] = new Penguin(h[posid].GetCellRow(), h[posid].GetCellCol(), i);
			break;
		case 'C' :
			a[Neff++] = new Crocodile(h[posid].GetCellRow(), h[posid].GetCellCol(), i);
			break;
		case 'N' :
			a[Neff++] = new Hippopotamus(h[posid].GetCellRow(), h[posid].GetCellCol(), i);
			break;
		//case '' :
		//case '' :
		//case '' :
		//case '' :
		//case '' :
		//case '' :
	}
}

bool Cage::containAnimal(int x, int y)
{
	float tempManyAnimal = 0.3 * size;
	int manyAnimal = floor(tempManyAnimal);
	bool found = false;
	int i = 0;

	while ((i < manyAnimal) && (!found))
	{
		if ((x == a[i]->GetX()) && (y == a[i]->GetY()))
		{
			found = true;
		}
		else
		{
			i++;
		}
	}

	return found;
}

bool Cage::isFull()
{
	float tempManyAnimal = 0.3 * size;
	int manyAnimal = floor(tempManyAnimal);
	return (manyAnimal == Neff);
}

bool Cage::isEmpty()
{
	return (Neff == -1);
}
