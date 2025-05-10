#include <iostream>
#include <string>
using namespace std;
class student
{
private:
  string name;
  int id;
public:
    student (string n, int ID)
  {
	id = ID;
	name = n;
  }
  void print ()
  {
	cout << "name : " << name << endl;
	cout << "ID : " << id << endl;

  }
};

int main ()
{
  student s1 ("Hussam", 7094), s2 ("HUSSAM", 7004) , *p;
  student stu[3] = { {student ("array", 1234)}, s1, s2 };
  s1.print ();
  s2.print ();
  p=stu;
  for(size_t i = 0 ; i < 3 ; i++)
  stu[i].print ();
  for(size_t i = 0 ; i < 3 ; i++)
  (p+i)->print ();
  for(size_t i = 0 ; i < 3 ; i++)
  (p++)->print ();
  return 0;
}


