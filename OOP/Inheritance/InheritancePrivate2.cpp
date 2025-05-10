#include<iostream>
using namespace std;
class mather {
private:
    int i;
protected:
    int j ;
public:
    int k ;
};
class son : private mather {
int x ;
public:
    using mather::k ; 

};

int main()
{
    son ob ;
    /*ob.i ;cant accses for private member in the class mother
      ob.j ;*/
    ob.k ;

    return 0;
}