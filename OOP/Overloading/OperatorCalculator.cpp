#include <iostream>
using namespace std;
class unary
{
private:
    int x, y;

public:
    unary(int X = 0, int Y = 0) : x(X), y(Y) {}
    void print()
    {
        cout << "the sum\n"
             << x << " \n"
             << y << endl;
    }
    unary operator+=(unary a)
    {
        x += a.x;
        y += a.y;
    }
    unary operator-=(unary a)
    {
        x -= a.x;
        y -= a.y;
    }
    unary operator*=(unary a)
    {
        x *= a.x;
        y *= a.y;
    }
    unary operator/=(unary a)
    {
        x /= a.x;
        y /= a.y;
    }
};
int main()
{
    unary x(3, 4), xx(4, 4), x1(4, 44);
    x += xx;
    x.print();
    x -= x1;
    x.print();
    xx *= x1;
    xx.print();

    return 0;
}