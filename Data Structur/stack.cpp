#include <iostream>
using namespace std;

template <class t> class stack {
private:
  t array[1000];
  t top;

public:
  stack() { top = -1; }
  bool isempty() { return top == -1; }
  void push(t n) {
    if (top == 999) {
      cout << "the stack is fully";
    } else {
      array[++top] = n;
    }
  }
  void pop() {
    if (isempty()) {
      cout << "the stack is fully";
    } else {
      cout << "you delete : " << array[top] << endl;
      array[top--];
    }
  }
  void gettop() { cout << "top number is : " << array[top]<<endl; }
  void print() {
    if (top == -1) {
      cout << "the stack is empty there no elment to print it";
    } else {
      cout << "[ ";
      for (int i = top; i > -1; i--) {
        cout << array[i] << " ";
      }
      cout << "]" << endl;
    }
  }
};

int main() {
  stack<int> s1;
  s1.push(54);
  s1.push(65);
  s1.gettop();
  s1.push(76);
  s1.pop();
  s1.print();

  return 0;
}