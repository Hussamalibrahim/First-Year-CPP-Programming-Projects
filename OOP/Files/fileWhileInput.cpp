#include<iostream>
#include<fstream>
using namespace std;

int main()
{
ofstream hussamfile("hussam.txt") ;
int id;
string name ;
while (cin >> name >> id)
{
hussamfile << name << "    " << id << endl;
}
    return 0;
}