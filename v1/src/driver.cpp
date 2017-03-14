#include "zoo.h"
#include "renderable.h"

int main(){
	Zoo z;
    Renderable r;
    z.Tour();    
	r.Render(z);
    //z.MasukkanAnimal();
	//r.Render(z);
    //z.MasukkanAnimal();
	//r.Render(z);
    //cout << Cage::neff;
	//cout << z.GetCages().size() << endl << z.GetHeight() << endl;
	return 0;
}
