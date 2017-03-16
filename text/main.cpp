#include <iostream>
#include "sample.h"
using namespace std;

int main (){
  Sample S;
  int pil; int param;
  // pilihan
  // 1. Add (int x)
  // 2. Min (int x)
  // 3. print () -- tak perlu ditest
  // 0. Quit

  do {
    cin >> pil;
    if (pil==1){
      cin >> param; S.Add(param); cout << S.getVal() << endl;
    } else if (pil==2){
      cin >> param; S.Min(param); cout << S.getVal() <<endl;
    }

  } while (pil!=0);
  return 0;
}
