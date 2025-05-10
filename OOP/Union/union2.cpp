#include <iostream>
using namespace std;

int main() {

  union {
    int standard;
    char section;
  };

  standard = 8;
  cout << "Standard = " << standard << endl;

  section = 'A';
  cout << "Section = " << section << endl;

  return 0;
}
