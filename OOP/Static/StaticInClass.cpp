#include<iostream>
using namespace std;
class LRNstatic {
private:
    static int Hi ;
public:
    LRNstatic() {
        Hi++;
        cout << "controcture number : " << Hi << endl;
    }
};
int LRNstatic::Hi=0;
int main()
{
    cout << "Tow constructure" << endl;
    LRNstatic L1,l2;
    cout << "three constructure" << endl;
    LRNstatic l[3];
    return 0;
}