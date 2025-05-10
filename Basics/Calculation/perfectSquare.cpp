#include<cmath>
#include<iostream>
using namespace std;
long int findNextSquare(int sq) {
    // Return the next square if sq if a perfect square, -1 otherwise
    for(int i =0; i <= sqrt(sq) ; i++) {
        if(sqrt(sq)*i==sq)
        {
            return (sq+(sqrt(sq)*2+1)) ;
        }
    }
    return -1;
}
int main() {
int x ;
cin >> x;
    cout <<  findNextSquare(x);
    return 0 ;
}