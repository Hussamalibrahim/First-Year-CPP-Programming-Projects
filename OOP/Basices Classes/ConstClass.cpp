#include<iostream>
using namespace std;
class time_
{
private:
    int hour, minute, seconds ;
public:
    time_ (int h, int m, int s):hour (h), minute (m), seconds (s)
    {
        cout << "the time is ";
    }
    void print() const
    {
        cout << hour << ":" << minute << seconds << endl;

    }
};
int main ()
{
    const time_ clock(10,5,5);
    clock.print();
    /*if we make object const 
    we should make the function 
    that coll throw the subject const*/

    return 0;
}
