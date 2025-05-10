#include<iostream>
#include<fstream>
using namespace std;

int main()
{
ofstream hussam ;
hussam.open("hussam.txt");
hussam << "hello world \nmy name is hussam ";
hussam.close();
    return 0;
}