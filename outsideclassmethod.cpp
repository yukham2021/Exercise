#include<iostream>
using namespace std;
class Myclass{
	public:
	void myMethod();
};
void Myclass::myMethod(){
	cout<<"Hello World!";
}
int main(){
	Myclass myObj;
	myObj.myMethod();
	return 0;
}
