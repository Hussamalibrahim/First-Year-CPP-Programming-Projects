#include<iostream>
using namespace std;

int main() {
    auto print_message = [](string message) 
    { 
        cout << message << "\n"; 
    };
    
    for(int i = 0; i < 10; i++) {
        print_message("Hello!"); 
    }
}