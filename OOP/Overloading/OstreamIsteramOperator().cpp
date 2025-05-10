#include <iostream> 
using namespace std; 

const int N = 3;
const int M = 3;

class Matrix { 
private: 
	int arr[N][M]; 

public: 
	
	friend istream& operator>>( 
		istream&, Matrix&); 

	friend ostream& operator<<( 
		ostream&, Matrix&); 
	int& operator()(int, int); 
}; 

// Function to overload the input 
// ">>" operator 
istream& operator>>(istream& cin, 
					Matrix& m) 
{
	for (int i = 0; i < N; i++) { 
		for (int j = 0; j < M; j++) { 
			cin >> m(i, j); 
		} 
	} 
	return cin; 
} 

// Function to overload the output 
// "<<" operator 
ostream& operator<<(ostream& cout, 
					Matrix& m) 
{ 
	for (int i = 0; i < N; i++) { 
		for (int j = 0; j < M; j++) { 
			cout << m(i, j) << " "; 
		} 
		cout << endl; 
	} 
	return cout; 
} 

// Function to call the operator 
// function to overload the operators 
int& Matrix::operator()(int i, int j) 
{ 
	return arr[i][j]; 
} 

// Driver Code 
int main() 
{ 
	Matrix m; 

	printf("Input the matrix:\n"); 

	// Compiler calls operator >> and 
	// passes object cin and object m 
	// as parameter operator>>(cin, m); 
	cin >> m; 

	printf("The matrix is:\n"); 
	// Compiler calls operator << and 
	// passes object cout and object m 
	// as parameter operator<<(cin, m); 
	cout << m; 

	return 0; 
} 
