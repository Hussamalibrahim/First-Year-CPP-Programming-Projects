
#include <iostream>
using namespace std;
string favlang = "c++";
string companyName = "GFG_2.0";

class Developer {
public:
  string favLang = "c++";
  string company = "GFG";

  Developer(string favlang, string company)
      : favLang(favlang), company(companyName) {}
};

int main() {
  Developer obj = Developer("python", "GFG");
  cout << "favourite Language : " << obj.favLang << endl;
  cout << "company Name : " << obj.company;
}
