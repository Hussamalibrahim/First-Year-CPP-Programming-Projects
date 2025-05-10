#include<iostream>
using namespace std;
float avg(float m1 , float m2 , float m3 )
{
return ( m1 +m2+ m3)/3 ;
}
int main()
{
float n1,n2,n3;
cin >> n1>>n2>>n3;
    cout << avg(n1,n2,n3) << endl;
    return 0;
}