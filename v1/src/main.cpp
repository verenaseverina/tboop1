#include "zoo.h"
#include "renderable.h"

int main(){
  Zoo z; int input; Renderable r;
  do {
    cout << "1.Tambahkan Animal" << endl << "2. Tour" << "3. Exit" << endl;
    cin >> input;
    switch (input) {
      case 1:
          
    }
  }
    z.MasukkanAnimal();
    z.MasukkanAnimal();
    z.Tour();    
	r.Render(z);
	//r.Render(z);
	//r.Render(z);
    //cout << Cage::neff;
	//cout << z.GetCages().size() << endl << z.GetHeight() << endl;
	return 0;
}
