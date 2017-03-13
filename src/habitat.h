//file habitat.h

#include "Cell.h"
#ifndef HABITAT_H
#define HABITAT_H

class Habitat : public Cell{
  public:
  	Habitat();
    /**
      *@brief Constructor
      *Mengisi content pada Cell
    */
    Habitat(char _content,int x, int y);
	Habitat& operator=(Cell* c);
};

#endif
