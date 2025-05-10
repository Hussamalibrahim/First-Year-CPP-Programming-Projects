#include<iostream>
using namespace std;

int main()
{
 int x ,f=1;
  cin >> x;
  for(int i = 2 ; i<x ; i++){
  if (x % i == 0)
  f = 0 ;
  }
  if (f== 0 )
  cout << "not prime" << endl;
  
 else
 cout << "prime" << endl;
 
  
    return 0;
}