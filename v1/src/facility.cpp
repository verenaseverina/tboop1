#include "facility.h"

Facility::Facility(char _content,int i, int j) : Cell(i,j) {
  this->content = _content;  
}

bool Facility::is_entrance() {
  return(entrance);
}

bool Facility::is_exit() {
  return(exit);
}

void Facility::set_true(int n) {
  if(n==0)
	entrance=true;
  else if(n==1)
	exit=true;
}
