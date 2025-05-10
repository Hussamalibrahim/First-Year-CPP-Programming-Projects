#include <iostream>

using namespace std;
class unary
{
private:
    int weight, hight;

public:
    unary(int w = 0, int h = 0)
    {
        weight = w;
        hight = h;
    }
    void print()
    {
        cout << "weight : " << weight << "\nhight : " << hight << endl;
    }
    unary operator*(unary c2)
    {
        unary c3;
        c3.weight = weight * c2.weight;
        c3.hight = hight * c2.hight;
        return c3;
    }
    unary operator/(unary c2)
    {
        unary c3;
        c3.weight = weight / c2.weight;
        c3.hight = hight / c2.hight;
        return c3;
    }
     unary operator-(unary c2)
    {
        unary c3;
        c3.weight = weight - c2.weight;
        c3.hight = hight - c2.hight;
        return c3;
    }
     unary operator+(unary c2)
    {
        unary c3;
        c3.weight = weight + c2.weight;
        c3.hight = hight + c2.hight;
        return c3;
    }
    

};

int main()
{
    unary c1(3, 4), c2(73, 3), c3;
    c3 = c1 * c2;
    c3.print();
    c3 = c2 / c1 ;
    c3.print();
    c3 = c1 + c2 ;
    c3.print();
    return 0;
}