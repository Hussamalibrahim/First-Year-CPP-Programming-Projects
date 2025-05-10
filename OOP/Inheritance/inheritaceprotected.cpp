#include <iostream>
using namespace std;

class Shape {
protected:
  int length, width;
public:
  Shape(int l, int w) {
    length = l;
    width = w;
  }
  int get_Area() {
    cout << "This is call to parent class area\n";
    return 1;
  }
};

class Square : public Shape {
public:
  Square(int l = 0, int w = 0) : Shape(l, w) {}
  int get_Area() {
    cout << "Square area: " << length * width << '\n';
    return (length * width);
  }
};
class Rectangle : public Shape {
public:
  Rectangle(int l = 0, int w = 0) : Shape(l, w) {}
  int get_Area() {
    cout << "Rectangle area: " << length * width << '\n';
    return (length * width);
  }
};

int main() {
  Shape *s;

  Square sq(5, 5);

  Rectangle rec(4, 5);
  s = &sq;
  s->get_Area();
  s = &rec;
  s->get_Area();

  return 0;
}
