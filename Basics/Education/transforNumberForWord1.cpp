#include<iostream>
using namespace std;
int main ()
{
int number;
cout << "Enter number betwen 0 and 100" << endl;
cin >> number;
while (number>100)
{
cout << "please Enter number betwen 0 and 100" << endl;
cin >> number;
}
 string betwen0_20 []{"zero","one","two","three","four","five","six","seven","eight","nine","ten","eleven","twelve","thirteen","fourteen","fifteen","sixteen","seventeen","eighteen","nineteen"};
string tens []{" "," ","twenty","therty","fourty","fifty","sixty","sevent","eighty","ninty"};
    if (number<20)
    {
    cout << betwen0_20[number];
    }
       else if (number < 100)
       {
        cout << tens[number/10];
        if (number%10!=0){
        cout << " "+betwen0_20[number%10];
        }
       }
       if (number==100)
       cout << "one hunderd" << endl;
return 0;
}



    