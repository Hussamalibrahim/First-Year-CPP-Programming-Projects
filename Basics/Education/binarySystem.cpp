#include <iostream>
#include <bitset>
using namespace std;
int main() {
    int N;
    cout << "Enter a number: ";
    cin >> N;

    // Print the number in binary format
    cout << "Binary representation: " << bitset<sizeof(int)*8>(N) << endl;

    // Print the number in hexadecimal format
    cout << "Hexadecimal representation: " << hex << N << endl;

    return 0;
}