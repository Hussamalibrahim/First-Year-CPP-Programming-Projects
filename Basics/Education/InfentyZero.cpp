#include<iostream>
using namespace std;

int main()
{
int n1=0 , n2=0 ,n3 =0 ;
while (n1 +n2 < 20){
 n3= n1 + n2 ;
 n1= n2;
 n2= n3;
cout << n3 << " ";

}
    return 0;
}