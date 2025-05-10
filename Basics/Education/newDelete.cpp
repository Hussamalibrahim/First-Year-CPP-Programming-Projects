#include <iostream>
using namespace std;
int main ()
{
  int *p;
  p = new int;
  *p  = 2300;
  cout << p << endl;//value of the pointer
  cout << &p << endl;//location of the pointer
  cout << *p << endl;//addres of the pointer
  delete p;//after delete the operator he sttile have its addres and location , just delete the value
  cout << p << endl;
  cout << &p << endl;
  cout << *p << endl;




  return 0;
}
