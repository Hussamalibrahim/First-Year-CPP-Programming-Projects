#include <iostream>
using namespace std;
class unaary
{
private:
    int x, y;
public:
    unaary(int X = 0 , int Y = 0)
    {
        x = X;
        y = Y;
    }
bool operator!()
    {
        return (x == 0 && y == 0);
    };
};
int main()
{
    unaary x(0, 0);
    if (!x)
        cout << "true";
    else
        cout << "false";

    return 0;
}