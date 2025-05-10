#include <iostream>
using namespace std;
class unary
{
private:
    int x, y;
public:
    unary(int X = 0, int Y = 0) : x(X), y(Y)
    {
    }
    void print()
    {
        cout << "x: " << x << "\ny: " << y << endl;
    }
    void operator++()
    {
        x++;
        y++;
    }
    unary operator++(int) // postfix
    {
        unary t;
        t = *this;
        x++;
        y++;
        return t;
    }
    void operator--()
    {
        x--;
        y--;
    }
    unary operator--(int) //!*perfix
    {
        unary t;
        t = *this;
        x--;
        y--;
        return t;
    }
};
int main()
{
    unary c1(67, 67), c2(3, 3), c3(7, 8), c4(4, 5), c5, c6;
    c5 = c1++;
    ++c2;
    --c3;
    c6 = c4--;
    c1.print();
    c2.print();
    c3.print();
    c4.print();
    c5.print();
    c6.print();

    return 0;
}