#include<iostream>
using namespace std;
class monster {
public:
    virtual void attack () = 0 ;
    // its abstract class now
    virtual void weakness_point() = 0 ;
};
class zombia :public monster {
public:
    void attack ()
    {
        cout << "its attack you by bit" << endl;
    }
    void weakness_point()
    {
    cout << "he s weakness point the sun" << endl;
    }
};
class dragon : public monster {
public:
    void attack() {
        cout << "its attack you by fire" << endl;
    }
    void weakness_point()
    {
    cout << "hes weakness point in his ass \n";
    }
};
class vimbair : public monster {
public:
    void attack()
    {
        cout << "its attack you by water" << endl;
    }
    void weakness_point()
    {
    cout << "hes weakness point the selver" << endl;
    }
};

int main()
{
    monster *po1 , *po2 , *po3 ;
    zombia z ;
    dragon d ;
    vimbair v ;
    po1 =& z ;
    po2 =& d ;
    po3 =& v ;
    po1->weakness_point();
    po2->weakness_point();
    po3->weakness_point();
    monster *ptr1 , *ptr2 , *ptr3 ;
    //monster *ptr1 = new zombia ,*ptr2 = new dragon , ptr3 = new vimbair ;
    ptr1 = new zombia ;
    ptr2 = new dragon ;
    ptr3 = new vimbair ;
   monster*ptr4[3] = {ptr1 , ptr2 , ptr3};
    for (int k = 0 ; k < 3 ; k++)
    ptr4[k]->attack();
    return 0;
}