#include "renderable.h"
using namespace std;

void Renderable::Render(Zoo& virtual_zoo) {
  for (int i = 0; i < virtual_zoo.GetHeight(); i++) {
    for (int j = 0; j < virtual_zoo.GetWidth(); j++) {
      int idx = IsThereAnimal(virtual_zoo, i, j);
      if (idx != -999) { 
	      int an_idx = FindAnimal(virtual_zoo,idx,i,j);
	      cout << virtual_zoo.GetCages()[idx].GetAnimal()[an_idx]->GetContent();
      }
	  if (virtual_zoo.IsPlayer(i,j)) {
		  cout << 'P';  
	  }
      else {
	      cout << virtual_zoo.GetMap()[i][j]->GetCellContent();
      }
    }
    cout << endl;
  }
}

int Renderable::IsThereAnimal(Zoo& virtual_zoo, int x, int y) {
  int i = 0, j = 0;
  bool found = false;
  int cage = -999;
  while ((i < (signed)virtual_zoo.GetCages().size()) && (!found)) {
    bool stop = false;
    while ((j <= virtual_zoo.GetCages()[i].GetNeff()) && (!found) && (!stop)) {
      if(virtual_zoo.GetCages()[i].IsEmpty()){
        stop = true;
      }
      else if ((virtual_zoo.GetCages()[i].GetAnimal()[j]->GetX() == x) && (virtual_zoo.GetCages()[i].GetAnimal()[j]->GetY() == y)) {
        found = true;
        cage = i;
      }
      else {
        j++;
      }
    }
    i++;
  }

  return cage;
}

int Renderable::FindAnimal(Zoo& virtual_zoo, int i, int x, int y) {
  int k = 0;
  bool found = false;
  while ((k < virtual_zoo.GetCages()[i].GetSize()) && (!found)) {
    if ((virtual_zoo.GetCages()[i].GetAnimal()[k]->GetX() == x) && (virtual_zoo.GetCages()[i].GetAnimal()[k]->GetY() == y)) {
      found = true;
    }
    else {
      k++;
    }
  }

  return k;
}
