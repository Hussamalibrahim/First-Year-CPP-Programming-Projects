#include<iostream>
using namespace std;
class side;
class square {
private:
    int hight ;
    int weigth;
public:
   void set_square (int h, int w)
    {
        hight = h ;
        weigth = w ;
    }
    int area() {
     return hight * weigth ;
    }
    void convert(side f);
};

class side {
private:
    int sidee;
    
public:
    side (int s)
    {
        sidee = s ;
    }
    friend class square;
};

void square::convert(side f)
{
    hight = f.sidee ;
    weigth = f.sidee ;
}

int main()
{
    square sq;
    side F(5);
    sq.convert(F);
    cout <<  sq.area()<< endl;
    
    return 0;
}