#include <iostream>
using namespace std;
int main ()
{
  int array[4] = { 10, 1312, 12, 12 };
  int *p , *po ;
  p=array;
  po=&array[0];
  cout << *po << endl;
  cout << *p << endl;
  cout << *(p+1) << endl;
  cout << *(po+1) << endl;
  p+=2;//p=p+2 = 12
  cout << *p << endl;
  return 0;
}
