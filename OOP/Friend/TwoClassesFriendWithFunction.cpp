#include<iostream>
using namespace std;
class Chight ;
class Cweight
{
private :
    int weight, hight ;
public :
    Cweight (int wei)
    {
        weight = wei ;
    }
    friend int area(Chight h , Cweight w) ;
};
class Chight {
private :
    int hight ;
public :
    Chight (int hig)
    {
        hight = hig ;
    }
    friend int area(Chight h , Cweight w) ;
};
int area(Chight h , Cweight w)
{
return h.hight * w.weight ;
}
int main()
{
    Chight h(4) ;
    Cweight w(5) ;
cout << area(h,w) << endl;
    return 0;
}