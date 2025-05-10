#include <iostream>
using namespace std;

class EV
{
private:
    int x, y;

public:
    EV(int X = 0, int Y = 0)
    {
        x = X;
        y = Y;
    }
    void operator++() // perfix and postfix
    {
        x++;
        y++;
    }
    EV operator++(int)
    {
        EV c1;
        c1 = *this;
        x++;
        y++;
        return c1;
    }
    EV operator--()
    {
        x--;
        y--;
    }
    EV operator--(int)
    {
        EV c2;
        c2 = *this;
        x--;
        y--;
        return c2;
    }
    EV operator+(EV c2) //! calucation
    {
        EV c1;
        c1.x = x + c2.x;
        c1.y = y + c2.y;
        return c1;
    }
    EV operator-(EV c2)
    {
        EV c1;
        c1.x = x - c2.x;
        c1.y = y - c2.y;
        return c1;
    }
    EV operator/(EV c2)
    {
        EV c1;
        c1.x = x / c2.x;
        c1.y = y / c2.y;
        return c1;
    }
    EV operator*(EV c2)
    {
        EV c1;
        c1.x = x * c2.x;
        c1.y = y * c2.y;
        return c1;
    }
    EV operator+=(EV c2) // todo add the number to the orgenail
    {
        x += c2.x;
        y += c2.y;
    }
    EV operator/=(EV c2)
    {
        x /= c2.x;
        y /= c2.y;
    }
    EV operator*=(EV c2)
    {
        x *= c2.x;
        y *= c2.y;
    }
    EV operator-=(EV c2)
    {
        x -= c2.x;
        y -= c2.y;
    }
    bool operator==(EV c) // if
    {
        return (x == c.x && y == c.y);
    }
    bool operator!=(EV c)
    {
        return (x != c.x && y != c.y);
    }
    bool operator<(EV c)
    {
        return (x < c.x && y < c.y);
    }
    bool operator>(EV c)
    {
        return (x > c.x && y > c.y);
    }
    bool operator>=(EV c)
    {
        return (x >= c.x && y >= c.y);
    }
    bool operator<=(EV c)
    {
        return (x <= c.x && y <= c.y);
    }
    EV operator-(int n) // calucation object with number
    {
        EV c;
        c.x = x - n;
        c.y = y - n;
        return c;
    }
    EV operator+(int n)
    {
        EV c;
        c.x = x + n;
        c.y = y + n;
        return c;
    }
    EV operator*(int n)
    {
        EV c;
        c.x = x * n;
        c.y = y * n;
        return c;
    }
    EV operator/(int n)
    {
        EV c;
        c.x = x / n;
        c.y = y / n;
        return c;
    }
    EV operator+=(int i) //! add number for object
    {
        x += i;
        y += i;
    }
    EV operator-=(int i)
    {
        x -= i;
        y -= i;
    }
    EV operator*=(int i)
    {
        x *= i;
        y *= i;
    }
    EV operator/=(int i)
    {
        x /= i;
        y /= i;
    }
    friend EV operator+(int n, EV c2) // calucation number with object
    {
        EV c;
        c.x = n + c2.x;
        c.y = n + c2.y;
        return c;
    }
    friend EV operator-(int n, EV c2)
    {
        EV c;
        c.x = n - c2.x;
        c.y = n - c2.y;
        return c;
    }
    friend EV operator*(int n, EV c2)
    {
        EV c;
        c.x = n * c2.x;
        c.y = n * c2.y;
        return c;
    }
    friend EV operator/(int n, EV c2)
    {
        EV c;
        c.x = n / c2.x;
        c.y = n / c2.y;
        return c;
    }
    friend istream &operator>>(istream &input, EV &ab) // cin << object
    {
        input >> ab.x >> ab.y;
        return input;
    }
    friend ostream &operator<<(ostream &output, EV &ab) // cout >> object
    {
        output << "x : " << ab.x << "\t\ty : " << ab.y;
        return output;
    }
};
int main()
{
    EV c1(3, 4), c2(66, 55), c3(34, 6), c4(44, 34), c5(3, 3), c6(334, 333), c7(0, 1), c8, c9, c10;
    system("cls");
    c9 = c1++;
    cout << c9 << endl;
    cout << c1 << endl;
    ++c2;
    cout << c2 << endl;
    c9 = c3--;
    cout << c3 << endl;
    cout << c9 << endl;
    cout << c7 << endl;
    c8 = c6 / c9;
    cout << c8 << endl;
    c2 += c4;
    cout << c2 << endl;
    c4 *= c5;
    cout << c4 << endl;
    c4 += 102;
    cout << c4 << endl;
    c4 *= 2;
    cout << c4 << endl;
    if (c4 > c2 || c2 == c1)
        cout << "true" << endl;
    else
        cout << "false" << endl;
    if (c5 < c3)
        cout << "true" << endl;
    else
        cout << "false" << endl;
    cout << "enter the value of x ND Y FOR C10";
    cin >> c10;
    cout << c10;

    return 0;
}