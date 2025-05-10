#include <iostream>
using namespace std;

template <class T, class U = char> void hello(T a, U b) {
  cout << a << " " << b<<endl;
}
int main() {
  hello<int, int>(12, 1);
  hello<int>(12,'b');
}