#include<iostream>
using namespace std ;

class ioSTREA
{
private:
int x , y ;
public:
ioSTREA(int X1 = 0 , int X2=0){
    x=X1 ;
    y=X2;
}

friend istream&operator>>(istream&input ,ioSTREA&ab )
{
    input >> ab.x >> ab.y ;
    return input ;
}
friend ostream&operator<<(ostream&output ,ioSTREA&ab )
{
    output << "x : " << ab.x << "\ny : " << ab.y ;
    return output ;
}

};
int main()
{
 ioSTREA a1 , a2 ;
 cin >> a1 ;
cout << a1 ;


    return 0 ;
}