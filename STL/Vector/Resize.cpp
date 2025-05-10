#include<iostream>
#include<vector>
using namespace std;

int main()
{
    vector <int> v(10);
    for (int i = 0 ;i<10 ; i++)
    v[i]=i;
    cout << "size the vector " << v.size()<< endl;
    for (int i = 0 ;i<10 ; i++)
    cout << v[i] << " ";
    
    v.resize(5);
    cout << "size the vector \nafter resize " << v.size()<< endl;
    for (int i = 0 ;i<10 ; i++)
    cout << v[i] << " ";
    cout << "" << endl;
    //the elment havent been delete so we need to use function
    //colled shrink to fit
    v.shrink_to_fit();
    for (int i = 0 ;i<10 ; i++)
    cout << v[i] << " ";
    
    
    return 0;
}