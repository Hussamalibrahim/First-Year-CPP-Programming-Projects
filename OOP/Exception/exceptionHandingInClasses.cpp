#include<iostream>
using namespace std; 

// Class declaration 
class Number { 
private: 
	int a, b; 

public: 
	// Constructors 
	Number(int x, int y) 
	{ 
		a = x; 
		b = y; 
	} 

	// Function that find the GCD 
	// of two numbers a and b 
	int gcd() 
	{ 
		// While a is not equal to b 
		while (a != b) { 

			// Update a to a - b 
			if (a > b) 
				a = a - b; 

			// Otherwise, update b 
			else
				b = b - a; 
		} 

		// Return the resultant GCD 
		return a; 
	} 

	// Function to check if the 
	// given number is prime 
	bool isPrime(int n) 
	{ 
		// Base Case 
		if (n <= 1) 
			return false; 

		// Iterate over the range [2, N] 
		for (int i = 2; i < n; i++) { 

			// If n has more than 2 
			// factors, then return 
			// false 
			if (n % i == 0) 
				return false; 
		} 

		// Return true 
		return true; 
	} 
}; 

// Empty class 
class MyPrimeException { 
}; 

// Driver Code 
int main() 
{ 
	int x = 13, y = 56; 

	Number num1(x, y); 

	// Print the GCD of X and Y 
	cout << "GCD is = "
		<< num1.gcd() << endl; 

	// If X is prime 
	if (num1.isPrime(x)) 
		cout << x 
			<< " is a prime number"
			<< endl; 

	// If Y is prime 
	if (num1.isPrime(y)) 
		cout << y 
			<< " is a prime number"
			<< endl; 

	// Exception Handling 
	if ((num1.isPrime(x)) 
		|| (num1.isPrime(y))) { 

		// Try Block 
		try { 
			throw MyPrimeException(); 
		} 

		// Catch Block 
		catch (MyPrimeException t) { 
			cout << "Caught exception of MyPrimeException class." << endl; 
		} 
	} 

	return 0; 
} 
