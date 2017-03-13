//File: Zoo.cpp
#include <iostream>
#include "Zoo.h"
using namespace std;
	Zoo::Zoo()
	{
		State s=new State;
		char** smap=s.GetMap();
		height=s.height;
		width=s.width;
		//buat matriks cell kosong
		map = new Cell*[width];
		for(int i=0;i<width;i++)
			map[i] = new Cell[height];
		//spesifikasi matriks cell
		for(int i=0;i<width;i++)
		{
			for(int j=0;j<height;j++)
			{
				if(smap[i][j]=='H')
					map[i][j] = new Habitat(smap[i][j],i,j);
				else if(smap[i][j]=='F')
					map[i][j] = new Facility(smap[i][j],i,j);
			}
		}
		GetAllCage(&s);
		cages = new Cage []
	}

	void Zoo::GetAllCage(State& s)
	{
		vector<vector<Habitat>> cagebuffer;
		char** smap=s.GetMap();
		int n=0;
		for(int i=0;i<width;i++)
		{
			for(int j=0;j<height;j++)
			{
				if(smap[i][j]=='H')
				{
					bool recorded=false;
					int x=0;
					while(!recorded&&x<cagebuffer.size)
					{
						recorded=InCage(&cagebuffer[x],map[i][j]);
						x++;
					}
					if(!recorded)
					{
						cagebuffer.resize(n);
						cagebuffer[n]=GetCage(map[i][j]);
						n++;
					}
				}
			}
		}
		cages.resize(cagebuffer.size);
		for(int i=0;i<cagebuffer.size;i++)
		{
			cages[i]=cagebuffer[i];
		}
	}
	vector<Habitat> Zoo::GetCage(Habitat hab)
	{
		vector<Habitat> cage(1);
		Habitat h;
		cage[0]=hab;
		int i=0;
		int j=0;

		while(i<cage.size)
		{
			h=cage[i]
			if(map[h.GetCellRow-1][h.GetCellCol].content==hab.GetCellContent()&&!InCage(&cage,map[i-1][j]))
			{
				cage.resize(cage.size+1);
				j++;
				cage[j]=h;
			}
			if(map[h.GetCellRow][h.GetCellCol+1].content==hab.GetCellContent()&&!InCage(&cage,map[i][j+1]))
			{
				cage.resize(cage.size+1);
				j++;
				cage[j]=h;
			}
			if(map[h.GetCellRow+1][h.GetCellCol].content==hab.GetCellContent()&&!InCage(&cage,map[i+1][j]))
			{
				cage.resize(cage.size+1);
				j++;
				cage[j]=h;
			}
			if(map[h.GetCellRow][h.GetCellCol-1].content==hab.GetCellContent()&&!InCage(&cage,map[i][j-1]))
			{
				cage.resize(cage.size+1);
				j++;
				cage[j]=h;
			}
			i++;
		}
		
		
	}
	
	bool Zoo::InCage(vector<Habitat> &v, Habitat h)
	{
		bool found=false;
		int i=0, int j;
		while(!found && i<v.size)
		{
			if(h.GetCellRow()==v[i].GetCellRow() && h.GetCellCol()==v[i].GetCellCol())
				found=true;
			i++;		
		}
		return(found);
	}
	
	bool Zoo::InCage(vector<Habitat> &v, Facility f)
	{
		return(false);
	}
	
	int Zoo::GetHeight()
	{
		return(height);
	}
	
	int Zoo::GetWidth()
	{
		return(width);
	}
	
	void Zoo::SelectAnimal(char animal)
	// Pilih animal
	// Cari cage yang sesuai sama karakter animalnya
	// Cek masih muat ga di cage itu
	// Akan panggil fungsi addAnimal
}