#include <iostream>
using namespace std;

class GFG_Base {

public:
  virtual void display() {
    cout << "Called virtual Base Class function"
         << "\n\n";
  }
  void print() {
    cout << "Called GFG_Base print function"
         << "\n\n";
  }
};
class GFG_Child : public GFG_Base {
public:
  void display() {
    cout << "Called GFG_Child Display Function"
         << "\n\n";
  }

  void print() {
    cout << "Called GFG_Child print Function"
         << "\n\n";
  }
};

int main() {
  GFG_Base *base;

  GFG_Child child;

  base = &child;

  base->GFG_Base::display();

  base->print();
}
