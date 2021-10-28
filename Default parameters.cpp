#include <iostream>
using namespace std;
void myfunction(string country= "Norway")
{cout<<country<<"\n";
}
int main(){
	myfunction("Sweden");
	myfunction("India");
	myfunction();
	myfunction("USA");
	return 0;
}
