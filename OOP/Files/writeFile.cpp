#include<iostream>
#include<fstream>
using namespace std;

int main()
{
    int a[10];
    int j = 0 ;
    for (int i = 0 ; i < 10 ; i++)
    {
        j = i * 4;
        a[i] = j ;
    }
    for (int k = 0 ; k < 10  ; k ++)
        cout << k << endl ;
    ofstream fileout("flie.txt", ios::binary);
    fileout.write(reinterpret_cast<char*>(a), 10 * sizeof(int));
    // we can use too
    //fileout.write((char*)&a , sizeof(a))
    fileout.close();
    return 0;
}