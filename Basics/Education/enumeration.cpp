#include<iostream>
#include<string>
using namespace std;
enum days { san = 1, mon, tue, wed, thr, fri, sat };

int main ()
{
  string day[7] = {"sanday", "monday", "tuesday", "wensday", "thersday", "friday","satarday"};
  days d[7] = { san, mon, tue, wed, thr, fri, sat };
  for (int i = 0; i < 7; i++)
	{
	  cout << d[i] << " _ " << day[i] << endl;
	}

  return 0;
}
