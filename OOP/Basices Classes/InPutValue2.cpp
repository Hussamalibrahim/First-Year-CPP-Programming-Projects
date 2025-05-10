#include <iostream>
#include <string>
using namespace std;
class car {
public:
  string brand ;
  string model ;
  int maxspeed ;
  int year ;
  void getinfo(){
  cout << "brand :" << brand << endl;
  cout << "model :" << model << endl;
  cout << "max speed :" << maxspeed << endl;
  cout << "year :" << year << endl;
  }
};
int main() {
car car1;
  car1 = {"BMW" , "X5",240 ,2024};
  car1.getinfo();
  return 0;
}
