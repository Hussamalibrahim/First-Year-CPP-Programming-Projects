#include <iostream>
using namespace std;

//// LIBRARY START
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
public:
  User() : pBase(nullptr) { pBase = new Derived1(); }

  ~User() {
    if (pBase == nullptr) {
      delete pBase;
      pBase = nullptr;
      cout << "kwpeodjpewojd/n";
    }
  }

  void Action() { pBase->DisplayAction(); }

private:
  Base *pBase;
};

int main() {
  User *user = new User();

  user->Action();

  delete user;
}
