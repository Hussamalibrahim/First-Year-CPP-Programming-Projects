#include<iostream>
using namespace std;

int main()
{
    float x,y,j=0;
    cout << "Enter number " << endl;
    cin >> x ;
    cout << "Enter basic number you want to know who much its repet" << endl;
    cin>> y;
    for (int i=0; i<=x; i++) {
        if (y/i==1) {
            j+=1;
        }
        
       if (i%10==y && i != y) {
            j+=1;
        }
        if(i/10==y)
            j+=1;
        if(x>100) {
            if (i/10*y==10)
                j++;
            if (i/100==y)
                j++;
        }

    }
    cout << "number " << y << " repet " << j <<" times" <<endl;
    return 0;
}