#include <iostream>
using namespace std;

class Parent {
public:
  void GeeksforGeeks() { cout << "Base Function" << endl; }
};

class Child : public Parent {
public:
  void GeeksforGeeks() { cout << "Derived Function" << endl; }
};
int main() {
  Child Child_Derived;
  Child_Derived.GeeksforGeeks();

  Child_Derived.Parent::GeeksforGeeks();
  return 0;
}
