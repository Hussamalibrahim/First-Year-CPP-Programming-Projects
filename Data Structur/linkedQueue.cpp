#include <cstddef>
#include <iostream >
using namespace std;
class queue {
  struct node {
    int item;
    node *next;
  };
  node *back, *front, *cur;
  int lenght;
  int frontpos;

public:
  queue() {
    back = nullptr;
    front = nullptr;
    lenght = 0;
    frontpos = 0;
  }
  bool isempty() { return back == nullptr; }
  void push(int elment) {
    if (isempty()) {
      front = new node;
      front->item = elment;
      front->next = nullptr;
      back = front;
      lenght++;
      frontpos++;
    } else {
      node *newPTR = new node;
      newPTR->item = elment;
      newPTR->next = nullptr;
      back->next = newPTR;
      back = newPTR;
      lenght++;
    }
  }
  void pop() {
    if (front->item == back->item) {
      node *newPTR = new node;
      newPTR->next = back;
      front = back = newPTR;
    }
    node *newotr = new node;
    front = front->next;
    lenght--;
    frontpos++;
  }
  void getfront() {
    if (isempty()) {
      cout << "the queue is empty \n";
    } else {
      cout << "the front elment is : " << front->item << endl;
    }
  }
  void getback() {
    if (isempty()) {
      cout << "the queue is empty \n";
    } else {
      cout << "the front elment is : " << back->item << endl;
    }
  }

  void find(int elment) {
    cur = front;
    int i = 0;
    while (cur != back->next) {
      if (elment == cur->item) {
        cout << elment << " in position " << i + frontpos;
      }
      cur = cur->next;
      i++;
    }
  }
  void print() {
    cur = front;
    cout << "[ ";
    while (cur != back->next) {
      cout << cur->item << " ";
      cur = cur->next;
    }
    cout << "]\n";
  }
  void format() {
    while (front != nullptr) {
      node *temp = front;
      front = front->next;
      temp = nullptr;
      delete temp;
    }
  }
};

int main() {
  queue s1;
  s1.push(5);
  s1.push(34);
  s1.push(23);
  s1.push(87);
  s1.print();
  s1.find(34);
  return 0;
}