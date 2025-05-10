#include <iostream>
using namespace std;
template <class t> class stack {
  struct node {
    t item;
    node *next;
  };
  node *top;
  node *cur;

public:
  stack() { top = nullptr; }
  void push(t item) {
    node *newitemPTR = new node;
    newitemPTR->item = item;
    newitemPTR->next = top;
    top = newitemPTR;
  }
  bool isempty() { return top == nullptr; }

  void pop() {
    if (isempty())
      cout << "Stack is empty" << endl;
    else {
      node *temp = top;
      top = top->next;
      temp = temp->next = nullptr;
      delete temp;
    }
  }
  void pop(t &stacktop) {
    if (isempty())
      cout << "Stack is empty" << endl;
    else {
      node *temp = top;
      stacktop = top->item;
      top = top->next;
      temp = temp->next = nullptr;
      delete temp;
    }
  }
  void gettop(t &stacktop) {
    if (isempty())
      cout << "Stack is empty" << endl;
    else {
      stacktop = top->item;
      cout << "top number is : " << stacktop << endl;
    }
  }
  void display() {
    cur = top;
    cout << "Stack is : ";
    while (cur->next != 0) {
      cout << cur->item << " ";
      cur = cur->next;
    }
    cout << endl;
  }
};

int main() {
 stack<int> s;
s.isempty();
 s.push(10);
  s.push(20);
  s.push(30);
  s.push(40);
  s.push(50);
  s.push(60);
  s.push(70);
  s.push(80);
  s.push(90);
  s.push(100);
  s.push(110);
  s.push(120);
  s.push(130);
  s.push(140);
  s.push(150);
  s.push(160);
  s.push(170);
  s.push(180);
  s.push(190);
  s.push(200);
  s.push(210);
  s.push(220);
  s.push(20);
  s.push(20);
  s.pop();
  int x = 5;
  s.gettop(x);
  s.display();
  s.pop();
  s.pop();
  s.pop();
  s.display();
  return 0;
}