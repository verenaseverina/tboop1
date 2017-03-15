#include "sample.h"
#include <iostream>

Sample::Sample() {
  v = 0;
}

void Sample::Add (int x) {
  v= v+x;
}

void Sample::Min (int x) {
  v= v - x;
}

void Sample::Print () {
  std::cout << v << std::endl;
}

int Sample::getVal() {
  return v;
}
