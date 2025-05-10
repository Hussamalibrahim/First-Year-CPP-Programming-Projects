#include <iostream>
using namespace std;
class linkedlist {
  struct node {
    node *next;
    int item;
  };
public:
  node *head;
  int length;
  node *tail;
  linkedlist() {
    length = 0;
    head = nullptr;
    tail = nullptr;
  }
  bool empty() { return length == 0; }
  void InsterFromhead(int elment) {
    node *newPTR = new node;
    newPTR->item = elment;
    if (empty()) {
      newPTR->next = nullptr;
      tail = head = newPTR;
    } else {
      newPTR->next = head;
      head = newPTR;
    }
    length++;
  }
  void InsterFromTail(int elment) {
    node *newPTR = new node;
    newPTR->item = elment;
    if (empty()) {
      newPTR->next = nullptr;
      tail = head = newPTR;
    } else {
      tail->next = newPTR;
      newPTR->next = NULL;
      tail = newPTR;
    }
    length++;
  }
  void InsterInPos(int elment, int pos) {
    if (pos < 0 || pos > length) {
      cout << "the position is wrong\n";
    } else if (pos == 0)
      InsterFromhead(elment);
    else if (pos == length)
      InsterFromTail(elment);
    else {
      node *newPTR = new node;
      newPTR->item = elment;
      node *cur = head;
      for (int i = 1; i < pos; i++)
        cur = cur->next;
      newPTR->next = cur->next;
      cur->next = newPTR;
      length++;
    }
  }
  void RemoveHead() {
    if (length == 0)
      cout << "there no elment to delete\n";
    else if (length == 1){
      delete head;
      length--;
    }
    else {
      node *temp = head;
      head = head->next;
      delete temp;
    length--;
    } 
  }
  void RemoveTail() {
    if (length == 0)
      cout << "there no elment to delete\n";
    else if (length == 1)
      {
      delete tail;
      length--;
      }
    else {
      node *curr = head->next;
      node *temp = head;
      while (curr != tail) {
         curr = curr->next;
         temp = temp->next;
      }
      temp->next=nullptr;
        tail = temp;
        delete curr;
        length--;
    }
    
  }
  void print() {
    node *newnode = head;
    cout << "[ ";
    while (newnode != nullptr) {
      cout << newnode->item << " ";
      newnode = newnode->next;
    }
    cout << "]\n";
  }
};

int main() {
  linkedlist s1;
  s1.InsterFromhead(123);
  s1.InsterFromhead(1232);
  s1.InsterFromTail(23);
  s1.RemoveHead();
  s1.RemoveTail();
  s1.print();
  return 0;
}