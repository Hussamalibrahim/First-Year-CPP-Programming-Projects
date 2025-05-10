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
    instrument * i2 = new piano;
    instrument * instrument[2] ={i1 ,i2 };
    for (int i=0 ; i<2 ;i++)
    instrument[i]->implemenatation();
    return 0;
}