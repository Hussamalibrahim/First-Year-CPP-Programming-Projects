#include<iostream>
using namespace std;
/*
you can have local classes
and they can have functions 
(non-static or static)
so you can get this to some extend
albeit
*/
int main() {
  struct X {
    static void a()
    {
    cout << "Hello World!" << endl;
    }
  };

  X::a();

  return 0;
}