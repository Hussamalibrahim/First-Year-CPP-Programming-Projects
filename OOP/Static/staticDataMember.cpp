#include <iostream>
using namespace std;
class A {
  int x;
public:
  A() { cout << "A's constructor called " << endl; }
};
class B {
  static A a;
public:
  B() { cout << "B's constructor called " << endl; }
  static A getA() { return a; }
};
A B::a;

int main() {
  B b1, b2, b3;
  A a = b1.getA();
  return 0;
}
