#include <iostream>
using namespace std;
class Copy {
private:
  int hight;
  int weight;
  static int h;

public:
 /* Copy() {
    hight = 0;
    weight = 0;
  }*/
  void Set_Copy(int h, int w) {
    hight = h;
    weight = w;
  }
  ~Copy() {
    cout << "distructor";
  }
  void print() {
    cout << "case : " << h++ << "\thight : " << hight << "\tweight : " << weight
         << endl;
  }
  void addres() { cout << this << endl; }
  /*Copy(Copy &c) {
    hight = c.hight;
    weight = c.weight;
  }*/
  //deep copy
};
int Copy::h = 1;

int main() {
  Copy c1;
  c1.Set_Copy(23, 32);
  c1.print();
  c1.addres();
  Copy c2(c1);
  c2.print();
  c2.addres();
  Copy c3 = c2;
  c3.print();
  c3.addres();
  //shallow copy
  return 0;
}