#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter a number: ";
    cin >> n;
    // Check if the number is a palindrome
    int originalN = n;
    int reversedN = 0;
    while (n > 0) {
        int digit = n % 10;
        reversedN = reversedN * 10 + digit;
        n /= 10;
    }
    if (originalN == reversedN) {
        cout << "The number is a palindrome." << endl;
    } else {
        cout << "The number is not a palindrome." << endl;
    }
    return 0;
}