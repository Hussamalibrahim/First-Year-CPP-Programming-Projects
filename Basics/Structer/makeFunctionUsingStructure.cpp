#include<iostream>
using namespace std;
struct distanc
{
    int contry ;
    int toun ;
};
distanc m(distanc h, distanc b)
{
    distanc lo;
    lo.contry = h.contry + b.contry;
    lo.toun = h.toun + b.toun;
    return lo;
}
int main()
{
    distanc x, y, z;
    cin >> x.contry >> y.contry;
    cin >>x.toun >> y.toun ;
    z = m( x , y);
    cout << z.contry << endl;
    cout << z.toun << endl;
    return 0;
}