#include <iostream>
using namespace std;
enum rainbow{
	violet,
	indigo,
	blue,
	green,yellow,orange,red
}colors;
enum class eyecolor:char{
	blue,green,brown
}eye;
int main() {

	cout<<"size of enum rainbow variable: "<<sizeof(colors)<<endl;
	cout<<"size of enum class eyecolor variable:"<<sizeof(eye)<<endl;
	return 0;
}
