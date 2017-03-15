#include "zoo.h"
#include "renderable.h"

int main(){
  Zoo z; int input; Renderable r;
  bool endloop = false;
  do {
    cout << "1.Tambahkan Animal" << endl << "2. Tour" << endl << "3. Exit" << endl;
    cin >> input;
    switch (input) {
      case 1: {
      	z.MasukkanAnimal();
      	break;
      }
      case 2: {
      	while(!z.Exit(z.GetPlayerPos())) {
      	  z.Tour();
      	  system("clear||cls");
      	  r.Render(z);
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
