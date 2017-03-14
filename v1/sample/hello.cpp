#include "hello.h"
#include <iostream>

Hello::Hello() {
  text = "Hello World!";
}

void Hello::Print() {
  std::cout << text << std::endl;
}

std::string Hello::GetText() {
  return text;
}
