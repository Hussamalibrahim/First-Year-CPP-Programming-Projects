#include <iostream>
using namespace std;

class Base {
public:
  Base() {}
  virtual ~Base() {}
  virtual void DisplayAction() = 0;
};

class Derived1 : public Base {
public:
  Derived1() { cout << "Derived1 created" << endl; }
  ~Derived1() { cout << "Derived1 destroyed" << endl; }
  void DisplayAction() { cout << "Action from Derived1" << endl; }
};

class Derived2 : public Base {
public:
  Derived2() { cout << "Derived2 created" << endl; }

  ~Derived2() { cout << "Derived2 destroyed" << endl; }

  void DisplayAction() { cout << "Action from Derived2" << endl; }
};

class User {
private:
  Base *pBase;
public:
  User() : pBase(nullptr) { pBase = new Derived1(); }

  ~User() {
    if (pBase) {
      delete pBase;
      pBase = nullptr;
    }
  }

  void Action() { pBase->DisplayAction(); }

};

int main() {
  User *user = new User();

  user->Action();

  delete user;
}
