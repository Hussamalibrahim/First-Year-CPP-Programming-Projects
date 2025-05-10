#include<iostream>
using namespace std;
int main(){
int e=1;
   for (int i =1  ;i<=5;  i++)
   {
   for (int j=5 ; j>=i; j--){
   cout <<" ";
   }
   for (int k =1 ;k<=e;k++){
   cout << "*" ;
   }
   e+=2;
   cout <<  endl;
   }
    
    return 0;
}