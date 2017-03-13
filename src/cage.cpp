#include "cage.h"
#include <bits/stdc++.h>
//using namespace std;

int Cage::neff = -1;

Cage::Cage(int _size, vector<Habitat> &buf) : size(buf.size())
{
  h = new Habitat[buf.size()];
  for (int i = 0; i < size; i++)
  {
    h[i] = buf[i];
  }
	
  float temp_many_animal = 0.3 * size;
  int many_animal = floor(temp_many_animal);
  a = new Animal*[many_animal];
}

Cage::Cage(const Cage& c) : size(c.size)
{
  h = new Habitat[c.size];
  int i;
  for (i = 0; i < size; i++)
  {
    h[i] = c.h[i];
  }

  float temp_many_animal = 0.3 * c.size;
  int many_animal = floor(temp_many_animal);
  a = new Animal*[many_animal];

  for (i = 0; i < many_animal; i++)
  {
    a[i] = c.a[i];
  }
}

Cage::~Cage()
{
  delete h;
  /*float temp_many_animal = 0.3 * size;
  int many_animal = floor(temp_many_animal);
  for (int i = 0; i < many_animal; i++)
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

  float temp_many_animal = 0.3 * c.size;
  int many_animal = floor(temp_many_animal);
  a = new Animal*[many_animal];

  for (i = 0; i < many_animal; i++)
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

void Cage::AddAnimal(char animal, int i)
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
  	{
  	  a[neff++] = new Tiger(h[posid].GetCellRow(), h[posid].GetCellCol(), i);
  	  break;
  	}
  	case 'B' :
  	{
  	  a[neff++] = new Panda(h[posid].GetCellRow(), h[posid].GetCellCol(), i);
  	  break;
  	}
  	case 'A' :
  	{
  	  a[neff++] = new Anoa(h[posid].GetCellRow(), h[posid].GetCellCol(), i);
  	  break;
  	}
  	case 'R' :
  	{
  	  a[neff++] = new Rhino(h[posid].GetCellRow(), h[posid].GetCellCol(), i);
  	  break;
  	}
  	case 'D' :
  	{
  	  a[neff++] = new Kangaroo(h[posid].GetCellRow(), h[posid].GetCellCol(), i);
  	  break;
  	}
  	case 'L' :
  	{
  	  a[neff++] = new Dolphin(h[posid].GetCellRow(), h[posid].GetCellCol(), i);
  	  break;
  	}
  	case 'W' :
  	{
  	  a[neff++] = new Whale(h[posid].GetCellRow(), h[posid].GetCellCol(), i);
  	  break;
  	}
  	case 'S' :
  	{
  	  a[neff++] = new Shark(h[posid].GetCellRow(), h[posid].GetCellCol(), i);
  	  break;
  	}
  	case 'K' :
  	{
  	  a[neff++] = new Kelelawar(h[posid].GetCellRow(), h[posid].GetCellCol(), i);
  	  break;
  	}
  	case 'E' :
  	{
  	  a[neff++] = new ElangB(h[posid].GetCellRow(), h[posid].GetCellCol(), i);
  	  break;
  	}
  	case 'T' :
  	{
  	  a[neff++] = new Toucan(h[posid].GetCellRow(), h[posid].GetCellCol(), i);
  	  break;
  	}
  	case 'P' :
  	{
  	  a[neff++] = new Penguin(h[posid].GetCellRow(), h[posid].GetCellCol(), i);
  	  break;
  	}
  	case 'C' :
  	{
  	  a[neff++] = new Crocodile(h[posid].GetCellRow(), h[posid].GetCellCol(), i);
  	  break;
  	}
  	case 'N' :
  	{
  	  a[neff++] = new Hippopotamus(h[posid].GetCellRow(), h[posid].GetCellCol(), i);
  	  break;
  	}
  	//case '' :
  	//case '' :
  	//case '' :
  	//case '' :
  	//case '' :
  	//case '' :
  }
}

bool Cage::ContainAnimal(int x, int y)
{
  float temp_many_animal = 0.3 * size;
  int many_animal = floor(temp_many_animal);
  bool found = false;
  int i = 0;

  while ((i < many_animal) && (!found))
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

bool Cage::IsFull()
{
  float temp_many_animal = 0.3 * size;
  int many_animal = floor(temp_many_animal);
  return (many_animal == neff);
}

bool Cage::IsEmpty()
{
  return (neff == -1);
}