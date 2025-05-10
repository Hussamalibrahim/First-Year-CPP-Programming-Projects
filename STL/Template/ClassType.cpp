#include <iostream >
using namespace std;

template <class T> void max_min(T arr[], int n) {
  for (int i = 0; i < n; i++) {
    for (int j = n ; j > i; j--) {
      if (arr[j] < arr[j - 1]) {
        swap(arr[j], arr[j - 1]);
      }
    }
  }
}
int main() {
  int a[5] = {23, 23, 55, 64, 2};
  int n = sizeof(a) / sizeof(a[0])-1;
  max_min<int>(a, n);

  for (int i = 0; i < n; i++)
    cout << a[i] << " ";

  return 0;
}