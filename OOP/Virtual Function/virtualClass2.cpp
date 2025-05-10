#include<iostream>
using namespace std;
class instrument {
public :
    virtual void implemenatation() =0 ;
};
class accordion : public instrument {
    void implemenatation () {
        cout << "accordion playing" << endl;
    }
};
class piano : public instrument {
    void implemenatation () {
        cout << "piano playing" << endl;
    }
};
int main()
{
    instrument  * i1 = new accordion;
    i1->implemenatation();
    instrument * i2 = new piano;
    i2->implemenatation();
    return 0;
}