#include<iostream>
using namespace std;
struct marks
{
    int FY;
    int SY;
};
class student
{
private :
    string name;
    marks marks;
public:
    student (string n,int b1, int b2)
    {
        name = n ;
        marks = {b1, b2};
    }
    
    int t()
    {
        return marks.FY + marks.SY ;
    }
    
    void p()
    {
        cout << "name of student " << name << endl;
        cout << "the mark in FirstYear " << marks.FY<<  endl;
        cout << "the mark in SecondeYear " << marks.SY<<endl;
        cout << "the toutal mark " << t() << endl;
    }
};

int main()
{
    student s("Hussam", 85, 70);
    s.p();
    return 0;
}