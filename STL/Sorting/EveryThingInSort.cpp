#include <algorithm>
#include <iostream>

using namespace std;
 

template <class T>

class Comparator { // we pass an object of this class as

                  // third arg to sort function...

public:

    bool operator()(T x1, T x2)

    {

        return x1 < x2;

    }
};
 

template <class T> bool funComparator(T x1, T x2)

{ // return type is bool

    return x1 <= x2;
}
 

void show(int a[], int array_size)
{

    for (int i = 0; i < array_size; i++) {

        cout << a[i] << " ";

    }
}
 

int main()
{

    int a[] = { 1, 5, 8, 9, 6, 7, 3, 4, 2, 0 };

    int asize = sizeof(a) / sizeof(int);

    cout << "The array before sorting is : ";

    show(a, asize);

    cout << endl << "The array after sorting is(asc) :";

    sort(a, a + asize);

    show(a, asize);

    cout << endl << "The array after sorting is(desc) :";

    sort(a, a + asize, greater<int>());

    show(a, asize);

    cout << endl

         << "The array after sorting is(asc but our "

            "comparator class) :";

    sort(a, a + asize, Comparator<int>());

    show(a, asize);

    cout << endl

         << "The array after sorting is(asc but our "

            "comparator function) :";

    sort(a, a + asize, funComparator<int>);

    show(a, asize);
 

    return 0;
}