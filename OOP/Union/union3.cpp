#include <iostream>
#include <string>
using namespace std;

class student {
public:
  string name;
  union {
    int standard;
    char section;
  };
};

int main() {

  student s1;
  s1.name = "geek";

  cout << "Name : " << s1.name << endl;

  s1.standard = 9;
  cout << "Standard : " << s1.standard << endl;
  s1.section = 'D';
  cout << "Section : " << s1.section << endl;

  return 0;
}
