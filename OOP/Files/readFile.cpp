#include<iostream>
#include<fstream>
using namespace std;

int main()
{
    int a[10];
    
    ifstream filein("flie.txt", ios::binary);
    filein.read(reinterpret_cast<char*>(a), 10 * sizeof(int));
    
    for (int i = 10 ; i < 20 ; i++)
    {
        a[i] = i*10 ;
    }
    for (int k = 0 ; k < 20  ; k ++)
        cout << k << endl ;
        
    filein.close();
    return 0;
}