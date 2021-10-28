# include <iostream>
using namespace std;
float calArea();
int main(){
	cout<<"Triangle area is"<<calArea();
	return 0;
}
float calArea()
{int height,base;
cout<<"Enter height and base";
cin>>height>>base;
return .5*height*base;
}
