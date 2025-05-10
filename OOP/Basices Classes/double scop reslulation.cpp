#include <iostream>
using namespace std;

class outside {
public:
	int x;
	class inside {
	public:
		int x;
		static int y;
	};
};
int outside::inside::y = 5;

int main()
{
	outside A;
        outside::inside B;
        cout << B.y;
}
