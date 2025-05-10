#include <iostream>
using namespace std;

int main() {
    int n = 5; 

    for (int i = 1; i <= n; ++i) {
        int num = i;
        int diff = n - 1;

        for (int j = 1; j <= i; ++j) {
            cout << num << " ";

            num += diff;
            --diff;
        }

        cout << endl;
    }

    return 0;
}