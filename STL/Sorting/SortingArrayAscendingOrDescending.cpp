#include <iostream>
using namespace std;

int main()
{
    int arr[] = { 1, 5, 8, 9, 6, 7, 3, 4, 2, 0 };
    int n = sizeof(arr) / sizeof(arr[0]);
    //sort(begin , bengin+length)
    sort(arr+2, arr + n);//1 5 0 2 3 4 6 7 8 9
    cout << "Array after sorting : \n";
    for (int i = 0; i < n; ++i)
        cout << arr[i] << " ";
    cout<<endl;
    
    sort(arr, arr + n, greater<int>());//9 8 7 6 5 4 3 2 1 0
    cout << "Array after sorting descending : \n";
    for (int i = 0; i < n; ++i)
        cout << arr[i] << " ";

    return 0;
}