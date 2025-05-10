#include<iostream>
using namespace std;

class a {
public:
    a() {
        cout << "A::Empty constroctur" << endl;
    }
    a(int a) {
        cout << "A::parameterize constructer" << a << endl;
    }
};
class b : public a {
public:
    b() {
        cout << "B::Empty constroctur" << endl;
    }
    b(int a)
    {
        cout << "B::parameterize constructer    " << a << endl;
    }

};
int main()
{
    b bb;
    b ab(4);
    return 0;
}