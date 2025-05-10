#include<iostream>
using namespace std;
class overlouding {
private :
    float hight ;
    float weight ;
    static int H ;
public :
    overlouding(int h = 0 , int w = 0)
    {
      hight = h ;
      weight = w ;
    }
   
    
    void print () 
    {
        cout <<"\nhigh is : " << hight <<
               "\nweight is : " << weight << endl;
    }
    void takenumbers ()
    {
    H++ ;
    cout << "case " << H << endl;
    cout << "Enter hight" << endl;
    cin >> hight;
    cout << "Enter weight" << endl;
    cin >> weight;
    }
    void add(overlouding c1 ,overlouding c2)
    {
    hight = c1.hight + c2.hight ;
    weight = c1.weight + c2.weight ;
    }
};
int overlouding:: H =0 ;
int main()
{
    overlouding case1, case2 , case3 ;
    case1.takenumbers();
    case2.takenumbers();
    case3.add(case1,case2) ;
    case1.print() ;
    case2.print() ;
    case3.print() ;
    return 0;
}