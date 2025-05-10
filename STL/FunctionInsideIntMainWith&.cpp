#include<iostream>
using namespace std;

int main() {
    int i = 0;
    
    auto addOne = [&] () {
        i++; 
    };

    while(i < 10) {
        addOne();
        cout << i << "\n";
    }
}