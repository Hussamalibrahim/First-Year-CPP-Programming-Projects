#include <iostream>
#include <stdexcept>
using namespace std;

int main()
{
	try {
		int numerator = 10;
		int denominator = 0;
		int res;
		if (denominator == 0) {
			throw runtime_error("Division by zero not allowed!");
		}

		// calculate result if no exception occurs
		res = numerator / denominator;
		//[printing result after division
		cout << "Result after division: " << res << endl;
	}
	catch (const exception& e) {
		cout << "Exception " << e.what() << endl;
	}

	return 0;
}
