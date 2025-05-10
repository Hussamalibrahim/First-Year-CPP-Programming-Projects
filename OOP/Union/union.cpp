#include <iostream>
using namespace std;

union GFG {
  int Geek1;
  char Geek2;
  float Geek3;
};

int main() {
  union GFG G1;

  G1.Geek1 = 34;

  cout << "The first value at "
       << "the allocated memory : " << G1.Geek1 << endl;

  G1.Geek2 = 'G';

  cout << "The next value stored "
       << "after removing the "
       << "previous value : " << G1.Geek2 << endl;

  G1.Geek3 = 34.34;

  cout << "The Final value value "
       << "at the same allocated "
       << "memory space : " << G1.Geek3 << endl;
  return 0;
}
