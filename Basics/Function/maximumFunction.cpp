#include<iostream>
using namespace std;
int max(int m1 , int m2 , int m3 )
{
int max =m1;
if(m2>max)
max=m2;
if (m3>max)
max=m3;
return max;
    }
    int main()
    {
    int n1,n2,n3;
    cin >> n1>>n2>>n3;
    cout << max(n1,n2,n3) << endl;
    return 0;
    }