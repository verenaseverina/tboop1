#include "cage.h"
#include <bits/stdc++.h>
//using namespace std;

Cage::Cage(int _size, vector<Habitat> &buf) : size(buf.size()) {
  h = new Habitat[buf.size()];
  for (int i = 0; i < size; i++) {
    h[i] = buf[i];
  }
  neff = -1;
  float temp_many_animal = 0.3 * size;
  int many_animal = floor(temp_many_animal);
  a = new Animal*[many_animal];
  /*for (int i = 0; i < many_animal; i++) {
    a[i] = new Animal;
  }*/
}
Cage::Cage(const Cage& c) : size(c.size) {
  h = new Habitat[c.size];
  int i;
  for (i = 0; i < size; i++) {
    h[i] = c.h[i];
  }
  neff = c.neff;
  float temp_many_animal = 0.3 * c.size;
  int many_animal = floor(temp_many_animal);
  a = new Animal*[many_animal];
  for (i = 0; i < many_animal; i++) {
    a[i] = c.a[i];
  }
}
Cage::~Cage() {
  /*delete h;
  if (!IsEmpty()) {
    for (int i = 0; i < neff; i++) {
      delete a[i];
    }
    delete a;
  }*/
}
Cage& Cage::operator=(const Cage& c) {
  delete [] h;
  delete [] a;
  h = new Habitat[c.size];
  int i;
  for (i = 0; i < size; i++) {
    h[i] = c.h[i];
  }

  float temp_many_animal = 0.3 * c.size;
  int many_animal = floor(temp_many_animal);
  a = new Animal*[many_animal];
  neff = c.neff;
  for (i = 0; i < many_animal; i++) {
    a[i] = c.a[i];
  }

  return *this;
}
Cage& Cage::operator=(const vector<Habitat>& v) {
  delete [] h;
  h = new Habitat[v.size()];
  for (int i = 0; i < size; i++) {
    h[i] = v[i];
  }

  return *this;
}
int Cage::GetSize() {
  return size;
}
Animal** Cage::GetAnimal() {
  return a;
}
Habitat* Cage::GetHabitat() {
  return h;
}
void Cage::AddAnimal(char animal, int i) {  
  int pos_id = 0;
  do {
    srand(time(NULL));
    pos_id = rand() % size;
  } while (ContainAnimal(h[pos_id].GetCellRow(), h[pos_id].GetCellCol()));
  neff++;
  switch(animal) {
    case 'H' : {
      a[neff] = new Tiger(h[pos_id].GetCellRow(), h[pos_id].GetCellCol(), i);
      break;
    }
    case 'B' : {
      a[neff] = new Panda(h[pos_id].GetCellRow(), h[pos_id].GetCellCol(), i);
      break;
    }
    case 'A' : {
      a[neff] = new Anoa(h[pos_id].GetCellRow(), h[pos_id].GetCellCol(), i);
      break;
    }
    case 'R' : {
      a[neff] = new Rhino(h[pos_id].GetCellRow(), h[pos_id].GetCellCol(), i);
      break;
    }
    case 'D' : {
      a[neff] = new Kangaroo(h[pos_id].GetCellRow(), h[pos_id].GetCellCol(), i);
      break;
    }
    case 'L' : {
      a[neff] = new Dolphin(h[pos_id].GetCellRow(), h[pos_id].GetCellCol(), i);
      break;
    }
    case 'W' : {
      a[neff] = new Whale(h[pos_id].GetCellRow(), h[pos_id].GetCellCol(), i);
      break;
    }
    case 'S' : {
      a[neff] = new Shark(h[pos_id].GetCellRow(), h[pos_id].GetCellCol(), i);
      break;
    }
    case 'K' : {
      a[neff] = new Kelelawar(h[pos_id].GetCellRow(), h[pos_id].GetCellCol(), i);
      break;
    }
    case 'E' : {
      a[neff] = new ElangB(h[pos_id].GetCellRow(), h[pos_id].GetCellCol(), i);
      break;
    }
    case 'T' : {
      a[neff] = new Toucan(h[pos_id].GetCellRow(), h[pos_id].GetCellCol(), i);
      break;
    }
    case 'P' : {
      a[neff] = new Penguin(h[pos_id].GetCellRow(), h[pos_id].GetCellCol(), i);
      break;
    }
    case 'C' : {
      a[neff] = new Crocodile(h[pos_id].GetCellRow(), h[pos_id].GetCellCol(), i);
      break;
    }
    case 'N' : {
      a[neff] = new Hippopotamus(h[pos_id].GetCellRow(), h[pos_id].GetCellCol(), i);
      break;
    }
    case 'O' : {
      a[neff] = new Ostrich(h[pos_id].GetCellRow(), h[pos_id].GetCellCol(), i);
      break;
    }
    case 'Y' : {
      a[neff] = new Kasuari(h[pos_id].GetCellRow(), h[pos_id].GetCellCol(), i);
      break;
    }
    case 'I' : {
      a[neff] = new Kiwi(h[pos_id].GetCellRow(), h[pos_id].GetCellCol(), i);
      break;
    }
    case 'F' : {
      a[neff] = new FlyingFish(h[pos_id].GetCellRow(), h[pos_id].GetCellCol(), i);
      break;
    }
    case 'Z' : {
      a[neff] = new Pelikan(h[pos_id].GetCellRow(), h[pos_id].GetCellCol(), i);
      break;
    }
    case 'M' : {
      a[neff] = new Cormorants(h[pos_id].GetCellRow(), h[pos_id].GetCellCol(), i);
      break;
    }
  }
}
bool Cage::ContainAnimal(int x, int y) {
  float temp_many_animal = 0.3 * size;
  int many_animal = floor(temp_many_animal);
  bool found = false;
  int i = 0;
  if(!IsEmpty()) {
    while ((i < many_animal) && (!found)) {
      if ((x == a[i]->GetX()) && (y == a[i]->GetY())) {
        found = true;
      }
      else {
        i++;
      }
    }
  }
  return found;
}
bool Cage::IsFull() {
  float temp_many_animal = 0.3 * size;
  int many_animal = floor(temp_many_animal);
  return (many_animal == neff);
}
bool Cage::IsEmpty() {
  return (neff == -1);
}
int Cage::GetNeff() {
  return neff;
}