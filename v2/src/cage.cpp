#include "cage.h"
#include <bits/stdc++.h>
//using namespace std;

Cage::Cage(int _size, vector<Cell> &buf) : size(buf.size()) {
  h = new Cell[buf.size()];
  for (int i = 0; i < size; i++) {
    h[i] = buf[i];
  }
  neff = -1;
  a = new Animal*[size];
}
Cage::Cage(const Cage& c) : size(c.size) {
  h = new Cell[c.size];
  int i;
  for (i = 0; i < size; i++) {
    h[i] = c.h[i];
  }
  neff = c.neff;
  a = new Animal*[size];
  for (i = 0; i < size; i++) {
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
  h = new Cell[c.size];
  int i;
  for (i = 0; i < size; i++) {
    h[i] = c.h[i];
  }

  a = new Animal*[size];
  neff = c.neff;
  for (i = 0; i < size; i++) {
    a[i] = c.a[i];
  }

  return *this;
}
Cage& Cage::operator=(const vector<Cell>& v) {
  delete [] h;
  h = new Cell[v.size()];
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
Cell* Cage::GetHabitat() {
  return h;
}
void Cage::AddAnimal(char animal, int i) {  
  int pos_id = 0;
  // do {
  //   srand(time(NULL));
  //   pos_id = rand() % size;
  // } while (!ContainAnimal(h[pos_id].GetCellRow(), h[pos_id].GetCellCol()));
  cout<<"c"<<endl;
  neff++;
  cout<<"X";
  a[neff] = new Animal(h[pos_id].GetCellRow(), h[pos_id].GetCellCol(), i,animal);
  cout<<"Xs";
}

bool Cage::ContainAnimal(int x, int y) {
  bool found = false;
  int i = 0;
  if(!IsEmpty()) {
    while ((i < size) && (!found)) {
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
  return (size == neff);
}
bool Cage::IsEmpty() {
  return (neff == -1);
}
int Cage::GetNeff() {
  return neff;
}
