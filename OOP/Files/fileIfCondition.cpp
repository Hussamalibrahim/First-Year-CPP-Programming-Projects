#include<iostream>
#include<fstream>
using namespace std;

int main()
{
ofstream hussamfile("hussam.txt") ;
if (hussamfile.is_open())
cout << "its open " << endl;
else
cout << "its close" << endl;
hussamfile << "hello world \nmy name is hussam ";
hussamfile.close();
    return 0;
}