#include <iostream>
using namespace std;

class shape {
public:
  string name;
  int sides;
  shape(string name, int sides) {
    this->name = name;
    this->sides = sides;
  }
};

class triangle : public shape {

private:
  int base;
  int height;

public:
  triangle(string name, int sides, int base, int height)
      : shape(name, sides)
  {
    this->base = base;
    this->height = height;
  }
  void area() { cout << "area of triangle: " << (0.5 * base * height) << endl; }
  void details() {
    cout << "shape is: " << name << endl;
    cout << "no. of sides are: " << sides << endl;
    cout << "base is: " << base << endl;
    cout << "height is: " << height << endl;
    area();
  }
};

class square : public shape {
private:
  int height;

public:
  square(string name, int sides, int height) : shape(name, sides) {
    this->height = height;
  }

  void area() { cout << "area of square: " << (height * height) << endl; }

  void details() {
    cout << "shape is: " << name << endl;
    cout << "no. of sides are: " << sides << endl;
    cout << "height is: " << height << endl;
    area();
  }
};

int main() {
  triangle t("triangle", 3, 2, 3);
  square s("square", 4, 2);

  t.details();
  cout << endl << endl;

  s.details();
  return 0;
}
