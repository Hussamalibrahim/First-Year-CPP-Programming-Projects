#include <iostream>
#include <string>
using namespace std;
class student {
private:
int idnumber;
string  name ;
public:
  student(int id , string n) : idnumber(id) , name(n)
  {
  }
  ~student()
  {
  cout << "destroy evrey thing" << endl;
  }
  void print(){
  cout << "name " << name << endl;
  cout << "idnumber " << idnumber <<endl;
  }
};
void f(student s){
student s1(444444,"soma");
s1.print();
}

int main() {

student st1 (116546,"hussam"), st2(12344,"soso"),s1(1253,"king");
st1.print();
st2.print();
f(s1);
  return 0;
}
