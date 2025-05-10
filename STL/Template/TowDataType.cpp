#include <iostream>
using namespace std;
template <class u, class T> void MAX(u n, T t) {
  cout << n << " " << t <<  endl;
}
int main() {

  MAX<char,int>('a',5);
}
