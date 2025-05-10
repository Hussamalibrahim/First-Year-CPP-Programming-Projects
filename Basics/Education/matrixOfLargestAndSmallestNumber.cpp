#include <iostream>
using namespace std;

int main()
{
	int T[10];
	int i, mi, ma;

	for (i=0;i<10;i++)
	{
		cout<<"Enter a number ";
		cin>>T[i];
	}
	mi = T[0];
	ma = T[0];
	for (i=1;i<10;i++)
	{
		if (T[i]<mi)
			mi=T[i];

		if (T[i]>ma)
			ma=T[i];
	}
	cout<<"The Max is "<<ma<<endl;
	cout<<"The Min is "<<mi<<endl;
}
 