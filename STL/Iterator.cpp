#include<iostream>
#include<vector>
using namespace std;

int main()
{
    vector <int> v= {1,2,3,4,5};
    vector <int>::iterator it=v.begin();
    for(; it!=v.end(); it++)
        cout << *it << " ";
    cout << "" << endl;

    vector <int> c = {6,7,8,9};
    vector <int>::reverse_iterator t=c.rbegin();
    for(; t!=c.rend(); t++)
        cout << *t << " ";
    cout << "" << endl;

    vector <int> d = {10,11,12,13};
    vector <int>::const_reverse_iterator id=d.crbegin();
    for(; id!=d.crend(); id++)
        cout << *id << " ";
    cout << "" << endl;

    vector <int> f = {14,15,16,17};
    vector <int>::const_iterator i=f.cbegin();
    for(; i!=f.cend(); i++)
        cout << *i << " ";
        cout << "" << endl;
        
     vector <int> dd = {18,19,20,21};
   auto x=dd.begin();
    for(; x!=dd.end(); x++)
        cout << *x << " ";
    return 0;
}