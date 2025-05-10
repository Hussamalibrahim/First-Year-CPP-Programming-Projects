#include <iostream>
using namespace std;
const int maxsize = 100;
class que {
private:
  int array[maxsize];
  int front;
  int back;
  int count; 

public:
  que() {
    front = 0;
    back = -1;//back = maxsize-1 ;
    count = 0;
  }
  bool impty() { return count == 0; }
  bool fully(){return count == maxsize;}
  void push(int elment) {
    if (fully()) {
      cout << "the queue overflow\n";
    } else {
      cout<< "you add : " << elment << endl;
      back = (back + 1) % maxsize;
      array[back] = elment;
      count++;
    }
  }
  void pop() {
    if (impty()) {
      cout << "the queue is impty\n";
    } else {
      cout<< "you delete : "<< array[front]<<endl;
      front = (front + 1) % maxsize;
      count--;
    }
  }
  void getfront() {
    if (impty()) {
      cout << "the queue is impty\n";
    } else {
      cout << "the front elment in the array is ; " << array[front] << endl;
    }
  }
  void getback() {
    if (impty()) {
      cout << "the queue is impty\n";
    } else {
      cout << "the back elment in the array is ; " << array[back] << endl;
    }
  }
  void display() {
    if (impty()) {
      cout<<"there no elment to print it\n";
    } else {
      cout << "[ ";
      for (int i = front; i != back; i = (i + 1) % maxsize) {
        cout << array[i] << " ";
      }
    }
    cout << array[back]<< " ]"<<endl;

  } /*cout << "[ ";
int i=front-1
cout<< "[ ";
while(i!=back){
i=(i=1)%maxsiaze;
cout << array[i]<< " ";
}
cout << "]"<<endl;

 */
  void search(int n) {
    int pos = -1;
    for (int i = front; i != back; i = (i + 1) % maxsize) {
      if (array[i]== n){
       pos = i;
       cout << n << " found is position : "<< pos <<endl;
       break;
      }
     }
     if (pos == -1) {
       if (array[back] == n) {
         pos = back;
         cout << n << " found is position : "<< pos <<endl;
         }
       else
        cout<<"the elment not exsest\n";
     }
  }
};

int main() {
  que s1;
  s1.push(10);
  s1.push(67);
  s1.push(76);
  s1.push(22);
  s1.display();
  s1.pop();
  s1.pop();
  s1.getfront();
  s1.getback();
  s1.push(999);
  s1.push(89);
  s1.push(989);
  s1.getfront();
  s1.getback();
  s1.display();

  return 0;
}