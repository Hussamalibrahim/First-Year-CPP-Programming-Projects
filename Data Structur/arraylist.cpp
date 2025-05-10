#include <iostream>
using namespace std;
class arraylist {
  int *arr;
  int length;
  int pos;
  int maxsize;

public:
  arraylist(int s) {
    arr = new int[s];
    length = 0;
    pos = 0;
    if (s < 0)
      maxsize = 10;
    else
      maxsize = s;
  }
  bool isempty() { return length == 0; }
  bool isfull() { return length == maxsize; }
  void getelment(int pos) {
    if (isempty())
      cout << "there no elments to print it\n";
    else if (pos < 0 || pos > length)
      cout << "out of the rang \n";
    else
    cout << arr[pos] << endl;
    }
  void insert(int elment) {
    if (isfull())
      cout << "the array is fully you cant add elment\n";
    else {
      arr[length] = elment;
      length++;
    }
  }
  void insertandremovetheposetion(int elment, int pos) {
    if (isfull())
      cout << "the array is fully you cant add elment\n";
    if (pos < 0 || pos > length)
      cout << "out of the rang\n";
    else
      arr[pos] = elment;
  }
  void insert_in_position_without_delelt(int elment, int pos) {
    if (isfull())
      cout << "the array is fully\n";
    if (pos < 0)
      cout << "out of the rang\n";
    else {
      for (int i = length; i > pos; i--) {
        arr[i] = arr[i - 1];
      }
      arr[pos] = elment;
      length++;
    }
  }
  void remove(int pos) {
    for (int i = pos; i < length; i++) {
      arr[i] = arr[i + 1];
      length--;
    }
  }
  void print() {
    cout << "[ ";
    for (int i = 0; i < length; i++) {
      cout << arr[i] << " ";
    }
    cout << "]\n";
  }
  void serch(int elment) {
    for (int i = 0; i <= length; i++) {
      if (arr[i] == elment) {
        cout << "the elment found in posetoin : " << i << endl;
        break;
      }
      if (i == length) {
        cout << "the elment elment is not found \n";
      }
    }
  }
  ~arraylist() { delete[] arr; }
  void clear() { length = 0; }
  
};

int main() {
  arraylist s1(7);
  s1.getelment(0);

  return 0;
}