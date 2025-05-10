#include<iostream>
using namespace std;
class myclass {
private:
    int a, b ;
public:
    myclass (int i, int j)
    {
        a = i ;
        b = j ;
    }
    friend int sum(myclass ob);
};
int sum(myclass ob)
{
    return ob.a + ob.b ;
}

int main()
{
    myclass o(5 , 4);
    cout << sum(o) << endl;
    
    return 0;
}