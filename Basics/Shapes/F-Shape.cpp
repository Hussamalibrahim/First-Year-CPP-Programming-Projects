#include<iostream>
using namespace std;

int main()
{
    for(int i=1;i<=9;i++)
    {
    for(int j=1;j<=9;j++){
     if(i==5||i==1||j==1)
    cout << "*" ;
    else 
    cout << " ";
    }
    
    
    cout << endl;
    }
    return 0;
}