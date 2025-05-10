#include <iostream>
using namespace std;
//in template you use type name if we need return value
template <typename t> t MaxNumber(t n1, t n2) {
  // any data type we use should return value like int double float char string size_t
  return (n1>n2)? n1:n2 ;
    }


int main() {
  cout << MaxNumber<int>(5, 4) << endl;
  cout << MaxNumber<double>(5.45, 3434.4) << endl;
  cout << MaxNumber<float> (34.67,342)<<endl;;
  cout << MaxNumber<char > ('a','b');
  

  return 0 ;
}