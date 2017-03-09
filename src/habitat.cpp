#include "Habitat.h"

Habitat::Habitat() : Cell(-1,-1)
{
	this->content = '0';
}

Habitat::Habitat(char _content, int x, int y) : Cell(x,y){
    this->content = _content;
}
