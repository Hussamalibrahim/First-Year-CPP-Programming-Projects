#include <iostream>
using namespace std;
class Complex {
private:
  int real, imag;

public:
  Complex(int r = 0, int i = 0) {
    real = r;
    imag = i;
  }
  void print() { cout << real << " + i" << imag << endl; }
  Complex operator+(Complex c1) {
    Complex c2;
    c2.real = real + c1.real;
    c2.imag = imag + c1.imag ;
                         return c2 ;
  }
  
};

int main() {
  Complex c1(10, 5), c2(2, 4);
  Complex c3 = c1 + c2;
  c3.print();
  return 0;
}
