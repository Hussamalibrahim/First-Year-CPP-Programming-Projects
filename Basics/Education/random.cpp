#include<iostream>
using namespace std;

int main()
{
srand(time(NULL));
int x = 5 , y=  3 , z = 7 ;
int arr[3] = {x , y , z};

    cout << arr[rand() % 3] << endl;
    return 0;
}