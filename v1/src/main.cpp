#include <unistd.h>
#include "zoo.h"
#include "renderable.h"

int main(){
  
  Zoo z; int input; Renderable r;
  bool endloop = false;
  //vector<Cell*> visited;
  cout << z.GetHeight() << " " << z.GetWidth() << endl;
  do {
    cout << "1.Tambahkan Animal" << endl << "2. Tour" << endl << "3. Exit" << endl;
    cin >> input;
    switch (input) {
      case 1: {
      	system("clear||cls");
      	//r.Render(z);
      	z.MasukkanAnimal();
      	break;
      }
      case 2: {
      	//cout << 'a';
      	z.RandomEntrance();
      	system("clear||cls");
      	r.Render(z);
      	while(!z.Exit(z.GetPlayerPos())) {
      	  usleep(100000);
      	  system("clear||cls");
      	  z.Tour();
      	  r.Render(z);
      	  //getchar();
      	}
      	break;
      }
      case 3: {
      	endloop = true;
      	break;
      }    
    }
  } while(!endloop);
  /*
    z.MasukkanAnimal();
    z.MasukkanAnimal();
    z.RandomEntrance();
    z.Tour();

	r.Render(z);
	//r.Render(z);
	//r.Render(z);
    //cout << Cage::neff;
	//cout << z.GetCages().size() << endl << z.GetHeight() << endl;
	return 0;*/
}
