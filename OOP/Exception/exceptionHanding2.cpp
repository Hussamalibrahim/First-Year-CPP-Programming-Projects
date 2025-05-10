// C++ program to demonstate property 4 in better way

#include <iostream>
using namespace std;

// Here we specify the exceptions that this function
// throws.
void fun(int* ptr, int x) throw(
	int*, int) // Dynamic Exception specification
{
	if (ptr == NULL)
		throw ptr;
	if (x == 0)
		throw x;
	/* Some functionality */
}

int main()
{
	try {
		fun(NULL, 0);
	}
	catch (...) {
		cout << "Caught exception from fun()";
	}
	return 0;
}
