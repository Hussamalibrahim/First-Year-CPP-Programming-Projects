#include<iostream>
using namespace std;

int main()
{
int n, a[10],sum=0;
float avg=0;
    cout << "Enter the number of student" << endl;
    cin >> n;
    for (int i=0 ;i<n ; i++){
    cout << "enter the mark :";
    cin >> a[i];
    sum +=a[i];
    }
    avg=sum/n ;
    cout << "the avg =" << avg << endl;
    for (int i =0;i<n;i++)
    cout << "a[" << i+1 << "]" << a[i]<<endl;
    return 0;
}