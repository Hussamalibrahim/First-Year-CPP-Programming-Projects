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
class son : mather{

};

int main()
{
    mather op;
    //op.i ; cant accses for private mumber
    //op.j ; cant accses for protected mumber
    op.k ;
    son ob ;
  /*ob.i ;cant accses for private member in the class mother
    ob.j ;
    ob.k ;*/
    
    return 0;
}