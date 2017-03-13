//File: zoo.cpp
#include <iostream>
#include "zoo.h"
using namespace std;
Zoo::Zoo() {
  State s;
  char** smap=s.GetMap();
  height=s.GetHeight();
  width=s.GetWidth();
  //buat matriks cell kosong
  map = new Cell**[height];
  for(int i=0;i<height;i++) {
    map[i] = new Cell*[width];
  }
  //spesifikasi matriks cell
  for(int i=0;i<height;i++) {
    for(int j=0;j<width;j++) {
      if(IsHabitat(smap[i][j])) {
        map[i][j] = new Habitat(smap[i][j],i,j);
      }
      else if(IsFacility(smap[i][j])) {
        map[i][j] = new Facility(smap[i][j],i,j);
      }
    }
  }
  GetCage(map[1][3]);
  //GetAllCage(s);
}

Zoo::~Zoo() {
  for(int i=0;i<height;i++) {
    for(int j=0;j<width;j++) {
       delete map[i][j];			
    }
    delete map[i];		
  }
  delete map;
}

void Zoo::GetAllCage(State& s) {
  vector<vector<Habitat>> cage_buffer;
  char** smap=s.GetMap();
  int n=0;
  for(int i=0;i<height;i++) {
    for(int j=0;j<width;j++) {
      if(IsHabitat(smap[i][j])) {
        bool recorded=false;
        int x=0;
        while((!recorded) && (x<(signed)cage_buffer.size())) {
          recorded=InCage(cage_buffer[x],map[i][j]);
          x++;
          
        if(!recorded) {
          //cout << cage_buffer.size();
          cage_buffer.resize(n);
          //cage_buffer[n]=GetCage(map[i][j]);
          n++;
        }
      }
    }
  }
  //cages.resize(10);
  for(int i=0;i<(signed)cage_buffer.size();i++) {
    Cage cgbuf((int)cage_buffer.size(),cage_buffer[i]);
    cages.push_back(cgbuf);
  }
}
vector<Habitat> Zoo::GetCage(Cell* hab) {
  vector<Habitat> cage(1);
  Habitat h;
  cage[0]=hab;
  int i=0;
  int j=0;
  cout << cage[0].GetCellContent()<< endl;
  cout << hab->GetCellContent() << endl;
  while(i<(signed)cage.size()) {
    h=cage[i];
    if(map[h.GetCellRow()-1][h.GetCellCol()]->GetCellContent()==hab->GetCellContent()&&!InCage(cage,map[i-1][j])&&(hab->GetCellRow()-1>=0)) {
      //cage.resize(cage.size()+1);
      Habitat b(map[h.GetCellRow()-1][h.GetCellCol()]->GetCellContent(),h.GetCellRow()-1,h.GetCellCol());				
      cage.push_back(b);
    }
    if(map[h.GetCellRow()][h.GetCellCol()+1]->GetCellContent()==hab->GetCellContent()&&!InCage(cage,map[i][j+1])) {
      cage.resize(cage.size()+1);
      j++;
      cage[j]=h;
    }
    if(map[h.GetCellRow()+1][h.GetCellCol()]->GetCellContent()==hab->GetCellContent()&&!InCage(cage,map[i+1][j])) {
      cage.resize(cage.size()+1);
      j++;
      cage[j]=h;
    }
    if(map[h.GetCellRow()][h.GetCellCol()-1]->GetCellContent()==hab->GetCellContent()&&!InCage(cage,map[i][j-1])) {
      cage.resize(cage.size()+1);
      j++;
      cage[j]=h;
    }
    i++;
  }
  return cage;
	
}

bool Zoo::InCage(vector<Habitat>& v, Cell* c) {
  if(IsHabitat(c->GetCellContent())) {
    bool found=false;
    int i=0;
    while(!found && i<(signed)v.size())
    {
      if(c->GetCellRow()==v[i].GetCellRow() && c->GetCellCol()==v[i].GetCellCol())
        found=true;
      i++;		
    }
    return(found);
  }
  else {
    return(false);
  }
}

Cell*** Zoo::GetMap() {
  return map;
}

vector<Cage> Zoo::GetCages() {
  return cages;
}

int Zoo::GetHeight() {
  return(height);
}

int Zoo::GetWidth() {
  return(width);
}

bool Zoo::IsHabitat(char c) {
  return(c=='^'||c=='~'||c=='`');
}

bool Zoo::IsFacility(char c) {
  return(c=='#'||c=='_'||c=='R');
}

void Zoo::MasukkanAnimal() {
  int size = cages.size();
  cout<<"Nama-Nama Binatang dan kodenya" << endl;
  cout<<"- Tiger (H)"<<endl;
  cout<<"- Panda (B)"<<endl;
  cout<<"- Anoa (A)"<<endl;
  cout<<"- Rhino (R)"<<endl;
  cout<<"- Kangaroo (D)"<<endl;
  cout<<"- Dolphin (L)"<<endl;
  cout<<"- Whale (W)"<<endl;
  cout<<"- Shark (S)"<<endl;
  cout<<"- Kelelawar (K)"<<endl;
  cout<<"- Elang Botak (E)"<<endl;
  cout<<"- Toucan (T)"<<endl;
  cout<<"- Penguin (P)"<<endl;
  cout<<"- Crocodile (C)"<<endl;
  cout<<"- Hippopotamus (N)"<<endl;
  cout<<endl;

  char input_user;
  cout<<"Masukkan kode binatang yang ingin dimasukkan kedalam kandang : "<<endl;
  cin>>input_user;

  bool* arr= new bool [size];
  arr={false};
  switch(input_user) {
    case 'H' : {
	      Tiger H(-1,-1,-1);
	      CekCage(arr,&H);
	      break;
      }
    case 'B' : {
	      Panda H(-1,-1,-1);
	      CekCage(arr,&H);
	      break;
      }
    case 'A' : {
	      Anoa H(-1,-1,-1);
	      CekCage(arr,&H);
	      break;
      }
    case 'R' : {
	      Rhino H(-1,-1,-1);
	      CekCage(arr,&H);
	      break;
      }
    case 'D' : {
	      Kangaroo H(-1,-1,-1);
	      CekCage(arr,&H);
	      break;
      }
    case 'L' : {
	      Dolphin H(-1,-1,-1);
	      CekCage(arr,&H);
	      break;
      }
    case 'W' : {
	      Whale H(-1,-1,-1);
	      CekCage(arr,&H);
	      break;
      }
    case 'S' : {
	      Shark H(-1,-1,-1);
	      CekCage(arr,&H);
	      break;
      }
    case 'K' : {
	      Kelelawar H(-1,-1,-1);
	      CekCage(arr,&H);
	      break;
      }
    case 'E' : {
	      ElangB H(-1,-1,-1);
	      CekCage(arr,&H);
	      break;
      }
    case 'T' : {
	      Toucan H(-1,-1,-1);
	      CekCage(arr,&H);
	      break;
      }
    case 'P' : {
	      Penguin H(-1,-1,-1);
	      CekCage(arr,&H);
	      break;
      }
    case 'C' : {
	      Crocodile H(-1,-1,-1);
	      CekCage(arr,&H);
	      break;
      }
    case 'N' : {
	      Hippopotamus H(-1,-1,-1);
	      CekCage(arr,&H);
	      break;
      }
  }

  cout<<"Kandang yang tersedia :"<<endl;
  for (int i=0;i<size;i++) {
    if (arr[i])
    {
      cout<<i<<endl;
    }
  }
  cout<<endl;
  int x;
  cout<<"Masukkan kode binatang yang ingin dimasukkan kedalam kandang : "<<endl;
  cout<<"(Untuk kandang bebas, masukkan -1)"<<endl;
  cout<<"(Untuk membatalkan, masukkan -2)"<<endl;
  do {
    cin>>x;
    if((arr[x]==false)&&(x>=size)&&(x!=-1)&&(x!=-2))
    {
      cout<<"Input salah, masukkan kembali input :"<<endl;
    }
  }while((arr[x]==false)&&(x>=size)&&(x!=-1)&&(x!=-2));

  if (x==-1) {
    srand(time(NULL));
    do
    {
      x = rand() % size;
    } while (arr[x]==false);
  }
  if (x!=-2) {
    cages[x].addAnimal(input_user,x);
  }
  delete [] arr;
}

void Zoo::CekCage(bool* arr,Animal* H) {
  for (int j=0;j<(*H).GetSize();j++) {				
    int i=0;
    while(i<(signed)cages.size()) {
      if ((arr[i]==false)&&((*H).GetHab()[j]==cages[i].GetAnimal()[0][0].GetHab()[j])) {					
        if(cages[i].isEmpty()) {
          arr[i]=true;
        }
        else if((!cages[i].isFull())&&((*H).GetTame()==cages[i].GetAnimal()[0][0].GetTame())) {
          arr[i]=true;
        }
      }
      i++;
    }
  }
}
