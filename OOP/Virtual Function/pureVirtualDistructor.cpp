#include <iostream>

class Base {
public:
	virtual ~Base() = 0;
}; 
Base::~Base()
{
	std::cout << "Pure virtual destructor is called";
}

class Derived : public Base {
public:
	~Derived() { std::cout << "~Derived() is executed\n"; }
};

int main()
{
	Base* b = new Derived();
	delete b;
	return 0;
}
