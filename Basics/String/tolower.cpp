#include <iostream>
using namespace std;
  string transfer(string a ){
  for (auto &x : a)
    x = tolower(x);
  cout<< a ;
  return a ;
  }

  int main() {
transfer ("HELLO WORLD \nMY NAME IS HUSSAM ALIBRAHIM");


    return 0 ;
}