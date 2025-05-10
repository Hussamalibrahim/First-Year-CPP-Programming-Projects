#include<iostream>
using namespace std;
int main(){
   for (int i =1  ;i<=9;  i++)
   {
   for (int j=9 ; j>=i; j--){
   cout <<" ";
   }
   for (int k =1 ;k<=i;k++){
   cout << k;
   }
   
   cout <<  endl;
   }
    
    return 0;
}