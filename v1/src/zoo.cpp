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
		if(i==0||j==0)
		  map[i][j]->set_true(0);
	    else if(i==height||j==width)
		  map[i][j]->set_true(1);
      }
    }
  }
  GetAllCage(s);
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
  vector<vector<Habitat>> cage_buffer(1);
  char** smap=s.GetMap();
  int n=1;
  for(int i=0;i<height;i++) {
    for(int j=0;j<width;j++) {
      if(IsHabitat(smap[i][j])) {
        bool recorded=false;
        int x=0;
        while((!recorded) && (x<(signed)cage_buffer.size())) {
          recorded=InCage(cage_buffer[x],map[i][j]);
          x++;
         }
        if(!recorded) {
          cage_buffer.resize(n);
          cage_buffer[n-1]=GetCage(map[i][j]);
          n++;
        }
      }
    }
  }
  for(int i=0;i<(signed)cage_buffer.size();i++) {
    Cage cgbuf(cage_buffer.size(),cage_buffer[i]);
    cages.push_back(cgbuf);
  }
}
vector<Habitat> Zoo::GetCage(Cell* hab) {
  vector<Habitat> cage(1);
  Habitat h;
  cage[0]=hab;
  int i=0;
  while(i<(signed)cage.size())
  {
    h=cage[i];
    if(h.GetCellRow()-1>=0){
      if(map[h.GetCellRow()-1][h.GetCellCol()]->GetCellContent()==hab->GetCellContent()&&!InCage(cage,map[h.GetCellRow()-1][h.GetCellCol()]))
      {
        Habitat b(hab->GetCellContent(),h.GetCellRow()-1,h.GetCellCol());				
        cage.push_back(b);
      }
    }
    if(h.GetCellCol()+1<width){
      if(map[h.GetCellRow()][h.GetCellCol()+1]->GetCellContent()==hab->GetCellContent()&&!InCage(cage,map[h.GetCellRow()][h.GetCellCol()+1]))
      {
        Habitat b(hab->GetCellContent(),h.GetCellRow(),h.GetCellCol()+1);			
        cage.push_back(b);
      }
    }
    if(h.GetCellRow()+1<height){
      if(map[h.GetCellRow()+1][h.GetCellCol()]->GetCellContent()==hab->GetCellContent()&&!InCage(cage,map[h.GetCellRow()+1][h.GetCellCol()]))
      {
        Habitat b(hab->GetCellContent(),h.GetCellRow()+1,h.GetCellCol());				
        cage.push_back(b);
      }
    }
    if(h.GetCellCol()-1>=0){
      if(map[h.GetCellRow()][h.GetCellCol()-1]->GetCellContent()==hab->GetCellContent()&&!InCage(cage,map[h.GetCellRow()][h.GetCellCol()-1]))
      {
        Habitat b(hab->GetCellContent(),h.GetCellRow(),h.GetCellCol()-1);				
        cage.push_back(b);
      }
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
  for(int i = 0; i < size; i++) {
    arr[i] = false;
  }
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
  bool found = false;
  cout<<"Masukkan kode binatang yang ingin dimasukkan kedalam kandang : "<<endl;
  cout<<"(Untuk kandang bebas, masukkan -1)"<<endl;
  cout<<"(Untuk membatalkan, masukkan -2)"<<endl;
  do {
    cin>>x;
    found = true;
    if((x>=size)||(x<=-2)) {
      cout<<"Input salah, masukkan kembali input :"<<endl;
      found = false;
    }else if (arr[x]==false && x < size && x > -2) {
      cout<<"Input salah, masukkan kembali input :"<<endl;
      found = false;
    }
  }while(!found);

  if (x==-1) {
    srand(time(NULL));
    do
    {
      x = rand() % size;
    } while (arr[x]==false);
  }
  if (x!=-2) {
    cages[x].AddAnimal(input_user,x);
  }
  delete [] arr;
}

void Zoo::CekCage(bool* arr,Animal* H) {
  for (int j=0;j<(*H).GetSize();j++) {				
    int i=0;
    while(i<(signed)cages.size()) {
      if ((arr[i]==false)&&((*H).GetHab()[j]==cages[i].GetHabitat()[0].GetCellContent())) {
        cout << cages[i].GetNeff() << endl;
        if(cages[i].IsEmpty()) {
          arr[i]=true;
        }
        else if((!cages[i].IsFull())&&((*H).GetTame()==cages[i].GetAnimal()[0][0].GetTame())) {
          arr[i]=true;
        }
      }
      i++;
    }
  }
}
/*
void Zoo::Tour() {
  vector<Facility> ent;
  vector<Facility> ex;
  for(int i=0;i<width;i++)
  {
	if(map[i][0].IsEntrance())
	  ent.push_back(map[i][0]);
    if(map[i][width-1].IsExit())
	  ex.push_back(map[i][width-1]);
  }
  for(int j=0;j<height;j++)
  {
	if(map[0][j].IsEntrance()) 
	  ent.push_back(map[0][j]);
    if(map[height-1][j].IsExit())
	  ex.push_back(map[height-1][j]);
  }
  srand(time(NULL));
  int randidx;
  Facility player = ent[randidx%4];
  int* pilihan = SelectTour();
  for(int k = 0;k < cages.size();k++)
  {
	if(pilihan[k] == 1)
	{
	  GoTour(player,k);  	
	}		
  }
}

int* Zoo::SelectTour() {
  int* pilihan = new int [cages.size()]
  for(int i = 0;i < cages.size();i++)
	pilihan[i]=0;
  cout << "Masukkan pilihan kandang yang akan dikunjungi:" << endl;
  cout << "Masukkan 0 untuk mengakhiri." << endl;
  int n = 0
  int pil;
  while(n <= cages.size() && pil != 0)
  {
	cin >> pil;
	if(pil < cages.size()+1 && pil > 0)
	{
	  if(pilihan[pil] == 1)
		cout << "Kandang sudah dipilih untuk dikunjungi." << endl;  
	  else 
	  {
		pilihan[pil-1]=1;
		n++;
	  }
	}
	else if(pil != 0)
	{
	  cout << "Tidak ada kandang dengan id tersebut." << endl;
	}
  }
  cout << "Kandang yang akan dikunjungi adalah: ";
  for(int i = 0;i < cages.size();i++)
  {
	if(pilihan[i] == 1)
      cout << i;
	if(i < cages.size() - 1)
	  cout << ", ";
	else
	  cout << ".";
  }
  return(pilihan);
}

void Zoo::GoTour(Facility p,int q)
{
  GetRoute();	
}

vector<>*/
