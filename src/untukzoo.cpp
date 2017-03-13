

void MasukkanAnimal()
{
	cout<<"Nama-Nama Binatang dan kodenya"
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

	char inputuser;
	cout<<"Masukkan kode binatang yang ingin dimasukkan kedalam kandang : "<<endl;
	cin>>inputuser;

	bool* arr= new bool [CageSize];
	arr={false};
	switch(inputuser)
	{
		case 'H' :
			{
				Tiger H(-1,-1,-1);
				CekCage(arr,H);
			}
		case 'B' :
			{
				Panda H(-1,-1,-1);
				CekCage(arr,H);
			}
		case 'A' :
			{
				Anoa H(-1,-1,-1);
				CekCage(arr,H);
			}
		case 'R' :
			{
				Rhino H(-1,-1,-1);
				CekCage(arr,H);
			}
		case 'D' :
			{
				Kangaroo H(-1,-1,-1);
				CekCage(arr,H);
			}
		case 'L' :
			{
				Dolphin H(-1,-1,-1);
				CekCage(arr,H);
			}
		case 'W' :
			{
				Whale H(-1,-1,-1);
				CekCage(arr,H);
			}
		case 'S' :
			{
				Shark H(-1,-1,-1);
				CekCage(arr,H);
			}
		case 'K' :
			{
				Kelelawar H(-1,-1,-1);
				CekCage(arr,H);
			}
		case 'E' :
			{
				ElangB H(-1,-1,-1);
				CekCage(arr,H);
			}
		case 'T' :
			{
				Toucan H(-1,-1,-1);
				CekCage(arr,H);
			}
		case 'P' :
			{
				Penguin H(-1,-1,-1);
				CekCage(arr,H);
			}
		case 'C' :
			{
				Crocodile H(-1,-1,-1);
				CekCage(arr,H);
			}
		case 'N' :
			{
				Hippopotamus H(-1,-1,-1);
				CekCage(arr,H);
			}
	}

	cout>>"Kandang yang tersedia :">>endl;
	for (int i=0;i<CageSize;i++)
	{
		if (arr[i])
		{
			cout<<i<<endl;
		}
	}
	cout<<endl;
	int inputkandang;
	cout<<"Masukkan kode binatang yang ingin dimasukkan kedalam kandang : "<<endl;
	cout<<"(Untuk kandang bebas, masukkan -1)"<<endl;
	cout<<"(Untuk membatalkan, masukkan -2)"<<endl;
	do
	{
		cin>>x;
		if((arr[x]==false)&&(x>=size)&&(x!=-1)&&(x!=-2))
		{
			cout>>"Input salah, masukkan kembali input :"<<endl;
		}
	}while((arr[x]==false)&&(x>=size)&&(x!=-1)&&(x!=-2));

	if (x==-1)
	{
		srand(time(NULL));
		do
		{
			x = rand() % CageSize;
		} while (arr[x]==false);
	}

	Cage[x].addAnimal(inputuser,x);
}

void CekCage(int* arr,Animal H)
{
	for (int j=0;j<H.GetSize();j++)
	{				
		int i=0;
		while(i<size)
		{
			if ((arr[i]==false)&&(H.Hab[j]==Cage.Hab().GetContent()))
			{					
				if(Cage[i].isEmpty())
				{
					arr[i]=true;
				}
				else if((!Cage[i].isFull())&&(H.GetTame()==Cage[i].Animal().GetTame()))
				{
					arr[i]=true;
				}
			}
		}
	}
}