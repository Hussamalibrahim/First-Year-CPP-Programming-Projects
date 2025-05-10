#include <iostream>
using namespace std;
class unary
{
private:
    int x, y;

public:
    unary(int X = 0, int Y = 0) : x(X), y(Y) {}
unary

    bool operator<(unary a)
    {
        return (x < a.x && y < a.y);
    }
    bool operator>(unary a)
    {
        return (x > a.x && y > a.y);
    }
    bool operator!=(unary a)
    {
        return (x != a.x && y != a.y);
    }
    bool operator==(unary a)
    {
        return (x == a.x && y == a.y);
    }
};
int main()
{
    unary c1(5, 1), c2(4, 0), c3(0, 44);
    if (c1 < c2)
        cout << "true" << endl;
    else
        cout << "false" << endl;
    if (c1 > c2)
        cout << "true" << endl;
    else
        cout << "false" << endl;
    if (c1 != c2)
        cout << "true" << endl;
    else
        cout << "false" << endl;
    return 0;
}