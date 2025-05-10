#include <iostream> 
using namespace std; 

void fun() 
{ 
	class Test
	{ 
	public: 
		static void method() 
		{ 
			cout << "Local Class method() called"; 
		} 
	}; 

	Test::method();
}

int main() 
{ 
	fun(); 
	return 0; 
}
