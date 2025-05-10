#include<iostream>
using namespace std;
class instrument {
public :
    virtual void implemenatation () {
        cout << "accordion playing" << endl;
    }
};
class instrument2 : public instrument {
    void implemenatation () {
        cout << "piano playing" << endl;
    }
};
int main()
{
    instrument  * i1 = new instrument2;
    i1->implemenatation();
    return 0;
}