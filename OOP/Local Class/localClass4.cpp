#include <iostream> 
using namespace std; 

int x; 

void fun() 
{ 

	class Test1 { 
	public: 
		Test1() { cout << "Test1::Test1()" << endl; } 
	}; 

	class Test2 { 
		Test1 t1; 

	public: 
		void method() 
		{ 
			cout << "x = " << x << endl; 
		} 
	}; 

	Test2 t; 
	t.method(); 
} 

int main() 
{ 
	fun(); 
	return 0; 
}
