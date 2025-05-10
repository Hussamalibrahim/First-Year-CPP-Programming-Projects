#include <cctype>
#include <iostream>
using namespace std;
  string transfer(string a ){
  for (auto &x : a)
    x = toupper(x);
  cout<< a ;
  return a ;
  }

  int main() {
transfer ("hello world \nmy name is hussam alibrahim");


    return 0 ;
}