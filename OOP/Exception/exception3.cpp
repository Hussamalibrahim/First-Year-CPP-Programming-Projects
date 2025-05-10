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
    class big {
    public:
        big() {}
        void bigger()
        {
            cout << "big" << endl;
        }
    };
    class small {
    public:
        small() {}
        void smaller()
        {
        cout << "small" << endl;
        }
    };
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
    catch (execption::big b)
    {
        b.bigger();
    }
    catch (execption::small s)
    {
        s.smaller();
    }
    return 0;
}