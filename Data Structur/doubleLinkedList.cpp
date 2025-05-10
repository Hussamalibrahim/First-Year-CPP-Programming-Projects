#include <iostream>
using namespace std;
class doublelinklist {
  struct node {
    int item;
    node *next;
    node *prev;
  };

public:
  node *back;
  node *front;
  int length;
  doublelinklist() {
    back = nullptr;
    front = nullptr;
    length = 0;
  }
  bool IsEmpty() { return length == 0; }
  void InsertFromFront(int elment) {
    node *newPTR = new node;
    newPTR->item = elment;
    newPTR->prev = nullptr;
    if (IsEmpty()) {
      newPTR->next = nullptr;
      front = back = newPTR;
    } else {
      newPTR->next = front;
      front->prev = newPTR;
      front = newPTR;
    }
    length++;
  }
  void InsertFromBack(int elment) {
    node *newPTR = new node;
    newPTR->item = elment;
    newPTR->next = nullptr;
    if (IsEmpty()) {
      newPTR->prev = nullptr;
      front = back = newPTR;
    } else {
      back->next = newPTR;
      newPTR->prev = back;
      back = newPTR;
    }
    length++;
  }
  void InsertInPos(int elment, int pos) {
    if (pos < 0 || pos > length)
      cout << "out of rang";
    else if (pos == 0)
      InsertFromFront(elment);
    else if (pos == length) {
      InsertFromBack(elment);
    } else {
      node *newPTR = new node;
      newPTR->item = elment;
      node *curr = front;
      for (int i = 1; i < pos; i++) {
        curr = curr->next;
      }
      newPTR->prev = curr;
      newPTR->next = curr->next;
      curr->next->prev = newPTR;
      curr->next = newPTR;
      length++;
    }
  }
  void PrintFromFirst() {
    node *cur = front;
    cout << "[ ";
    while (cur != NULL) {
      cout << cur->item << " ";
      cur = cur->next;
    }
    cout << "]\n";
  }
  void PrintFromFinal() {
    node *cur = back;
    cout << "[ ";
    while (cur != NULL) {
      cout << cur->item << " ";
      cur = cur->prev;
    }
    cout << "]\n";
  }
  void RemoveFront() {
    if (IsEmpty())
      cout << "the linkedlist is empty \n";
    else {
      if (length == 1)
        delete front;
      else {
        node *temp = front;
        front = front->next;
        front->prev = nullptr;
        delete temp;
      }
      length--;
    }
  }
  void RemoveBack() {
    if (IsEmpty())
      cout << "the linkedlist is empty \n";
    else {
      if (length == 1)
        delete back;
      else {
        node *temp = back;
        back = back->prev;
        back->next = nullptr;
        delete temp;
      }
      length--;
    }
  }
  void RemovePos(int pos) {
    if (pos < 0 || pos >= length)
      cout << "out of rang\n";
    else if (pos == 0)
      RemoveFront();
    else if (pos == length - 1)
      RemoveBack();
    else {
      node *temp = front->next;
      for (int i = 1; i < pos; i++)
        temp = temp->next;
      temp->next->prev = temp->prev;
      temp->prev->next = temp->next;
      delete temp;
      length--;
    }
  }
  void RemoveNumber(int elment) {
    node *temp = front;
    if (front->item == elment)
      RemoveFront();
    else if (back->item == elment)
      RemoveBack();
    else {
      for (int i = 0; i < length; i++) {
        temp = temp->next;
        if (temp==nullptr) {
          cout << "the number is not exect\n";
          break;
          }
        if (temp->item == elment) {
          temp->next->prev = temp->prev;
          temp->prev->next = temp->next;
          delete temp;
          length--;
          break;
        }
      }
    }
  }
};

int main() {
  doublelinklist s1;
  s1.InsertFromFront(44);
  s1.InsertFromFront(33);
  s1.InsertFromFront(66);
  s1.InsertFromBack(55);
  s1.PrintFromFirst();
  s1.RemoveNumber(565);
  s1.PrintFromFinal();

  return 0;
}