#include<iostream>
using namespace std;
class LRNstatic {
private:
    static int Hi ;
public:
    LRNstatic() {
        Hi++;
        print_LRNstatic();
    }
    static void print_LRNstatic() {
    /*there re two ways to call static function
    first one in line 9 and seconfe one in line 25*/
        cout << "controcture number : " << Hi << endl;
    }
};
int LRNstatic::Hi=0;
int main()
{
    cout << "Tow constructure" << endl;
    LRNstatic L1,l2;
    cout << "\nthree constructure" << endl;
    LRNstatic l[3];
    cout << "\nnumber of constructure" << endl;
    LRNstatic::print_LRNstatic();
    return 0;
}