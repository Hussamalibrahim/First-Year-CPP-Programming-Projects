#include<iostream>
using namespace std;
enum days {sun=1, mom, tue, wed,thu, fri, sat};
string day[7] = {"sun","mon","tue","wed","thu","fri","sat"};
class week {
private :
    days d[7];
public :
   void setweek (days w[])
    {
        for (int i = 0 ; i < 7 ; i++)
            d[i] = w[i];
    }
    void print()
    {
        for (size_t i = 0 ; i < 7 ; i++)
            cout << d[i] << " - " << day[i] <<endl;
    }
};
int main()
{
    days da[7] = {sun, mom, tue, wed,thu, fri, sat};
    /*becaee enum need call in bode for take its value
    we need function in class to give the private member 
    the value of elemen in enum*/
    week theweek;
    theweek.setweek(da);
    theweek.print();

    return 0;
}