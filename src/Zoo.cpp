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
	}

	void Zoo::GetAllCage(State& s)
	{
		vector<vector<Habitat>> cagebuffer;
		char** smap=GetMap();
		char current = smap[0][0];
		for(int i=0;i<width;i++)
		{
			for(int j=0;j<height;j++)
			{
				if(smap[i][j]=='H')
				{
					bool recorded=false;
					for(int x=0;x<v.size;v++)
					{
						recorded=InCage(&cagebuffer[x],map[i][j])
					}
					if(!recorded)
					{
						n=cagebuffer.size+1;
						cagebuffer.resize(n);
						cagebuffer[n]=GetCage(map[i][j]);
						//
					}
				}
			}
		}
	}
	vector<Habitat> Zoo::GetCage(Habitat h)
	{
		vector<Habitat> cage(1);
		Habitat current;
		cage[0]=h;
		int i=0;
		int j=0;

		while(i<cage.size)
		{
			if(map[h.GetCellRow-1][h.GetCellCol].content==h.GetCellContent()&&!InCage(&v,map[i-1][j]))
			{
				cage[j]=h;
				j++;
			}
			if(map[h.GetCellRow][h.GetCellCol+1].content==h.GetCellContent()&&!InCage(&v,map[i][j+1]))
			{
				cage[j]=h;
				j++;
			}
			if(map[h.GetCellRow+1][h.GetCellCol].content==h.GetCellContent()&&!InCage(&v,map[i+1][j]))
			{
				cage[j]=h;
				j++;
			}
			if(map[h.GetCellRow][h.GetCellCol-1].content==h.GetCellContent()&&!InCage(&v,map[i][j-1]))
			{
				cage[j]=h;
				j++;
			}
			i++;
		}
		
		
	}
	/*
	bool Zoo::Deadend(vector<Habitat> &v,Habitat h)
	{
		bool up=false;
		bool right=false;
		bool down=false;
		bool left=false;
		
		if(h.GetCellRow()!=0)
		{
			up=(map[h.GetCellRow-1][h.GetCellCol].GetCellContent()!=h.GetCellContent() || InCage(&v,map[i-1][j]));
		}
		else
			up=true;
		if(h.GetCellCol()!=width-1)
		{
			right=(map[h.GetCellRow][h.GetCellCol+1].GetCellContent()!=h.GetCellContent() || InCage(&v,map[i][j+1]));
		}
		else
			right=true;
		if(h.GetCellRow()!=height-1)
		{
			down=(map[h.GetCellRow+1][h.GetCellCol].GetCellContent()!=h.GetCellContent() || InCage(&v,map[i+1][j]));
		}
		else
			down=true;
		if(h.GetCellCol()!=0)
		{
			left=(map[h.GetCellRow][h.GetCellCol-1].GetCellContent()!=h.GetCellContent() || InCage(&v,map[i][j-1]));
		}
		else
			left=true;
		
		return(up&&right&&down&&left);
	}
	*/
	bool Zoo::InCage(vector<Habitat> &v, Habitat h)
	{
		bool found=false;
		int i=0, int j;
		while(!found && i<v.size)
		{
			j=0;
			if(h.GetCellRow()==v[i].GetCellRow() && h.GetCellCol()==v[i].GetCellCol())
				found=true;
			j++;		
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
}