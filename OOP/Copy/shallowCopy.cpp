#include <cstring>
#include <iostream>
using namespace std;

class String {
private:
    char* s;
    int size;

public:
    String(const char* str)// constructor
    {
        size = strlen(str);
        s = new char[size + 1];
        strcpy(s, str);
    }

    ~String() {
        delete[] s;    // destructor
    }
    void print() {
        cout << s << endl;
    }
};
int main()
{
    String str1("HUSSAM");
    String str2 = str1;

    str1.print();
    str2.print();
    return 0;
}
