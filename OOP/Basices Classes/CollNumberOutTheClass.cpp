#include<iostream>
using namespace std;
class phone
{
private:
  string name;
  string model;
  int price;
public:
    phone (string n, string m, int p):name (n), model (m), price (p)
  {
	cout << "the phone in costructor" << endl;
  }
void print();
};
 void phone:: print ()
  {
cout << "name " << name <<endl;
      cout<< "model"<< model<<endl;
      cout<< "price"<< price<< endl;
  }
int main ()
{
  phone ph ("iphon", "8 ", 1002), h ("samsung", "23ultra", 1200);
  ph.print ();
  h.print ();

  return 0;
}
