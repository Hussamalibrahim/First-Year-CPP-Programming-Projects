#include <iostream>
using namespace std;

class GFG {
public:
  int num;
  GFG(int j) { num = j; }
  GFG *operator->(void) { return this; }
};
int main() {
  GFG T(5);
  GFG *Ptr = &T;
  //    GFG* ptr2 = new GFG(43);
  cout << "T.num = " << T.num << endl;
  cout << "Ptr->num = " << Ptr->num << endl;
  cout << "T->num = " << T->num << endl;

  return 0;
}
