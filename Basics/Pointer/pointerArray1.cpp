#include<iostream>

using namespace std;

int main()
{
int arr [7] {11, 22, 333,65,54,65,54};
    cout << *arr << endl;//value of arr
    cout << *(arr+1) << endl;
    cout << *(arr+2) << endl;
    cout << arr << endl;//addres of arr
    cout << arr+1 << endl;
    cout << arr+2 << endl;
    for (int i =0; i<7;i++){
    cout << *(arr+i) << endl;
    }
       for (int i =0; i<7;i++){
       cout << arr+i << endl;
       }
              int *ptr;
              ptr = arr;
              for (int j =0;j<7;j++){
              cout << *(ptr++) << endl;
              //we can put ptr++ here rether than *(ptr++) 
              }
    return 0;
}