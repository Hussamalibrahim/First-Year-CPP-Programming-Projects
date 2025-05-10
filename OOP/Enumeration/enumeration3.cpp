#include <iostream>
using namespace std;

int main() {

  enum class Color { Red, Green, Blue };
  enum class Color2 { Red, Black, White };
  enum class People { Good, Bad };
  int Green = 10;
  Color x = Color::Green;
  if (x == Color::Red)
    cout << "It's Red\n";
  else
    cout << "It's not Red\n";

  People p = People::Good;

  if (p == People::Bad)
    cout << "Bad people\n";
  else
    cout << "Good people\n";

  cout << int(x);

  return 0;
}
