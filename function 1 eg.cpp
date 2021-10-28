#include <iostream>
using namespace std;
float calArea(){
	int height,base;
	cout<<"Enter height and base";
	cin>>height>>base;
	return 0.5*height*base;
}
int main(){
	cout<<"The triangle area is"<<calArea();
	return 0;
}
