#include<iostream>
using namespace std;
class execption
{
private :
    int x[10] ;
public:
    execption()
    {
        for (int i = 0 ; i < 10 ; i++)
            x[i] = i ;
    }
    int thrownumbers(int n)
    {
        if (n>10)
            throw big();
        if (n<0)
            throw small();
        else
            return x[n];
    }
    class big {};
    class small {};
};

int main()
{
    int i ;
    cout << "Enter the number" << endl;

    execption ex1 ;
    try {
        cin >> i;
        cout << ex1.thrownumbers(i);


    }
    catch (execption::big)
    {
        cout << "big number" << endl;
    }
    catch (execption::small)
    {
        cout << "small number" << endl;
    }
    return 0;
}