#include "facility.h"

Facility::Facility(char _content,int i, int j) : Cell(i,j) {
  this->content = _content;  
}

bool Facility::IsEntrance() {
  return(entrance);
}

bool Facility::IsExit() {
  return(exit);
}

void Facility::set_true(int n) {
  if(n==0)
	entrance=true;
  else if(n==1)
	exit=true;
}
