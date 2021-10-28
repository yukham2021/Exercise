# include <iostream>
using namespace std;
int main()
{int a;
cout<<"Enter Integer a value";
cin>>a;
if (a<10){
cout<<"Integer a value is less than 10.";
}
else if (a<20){
	cout<<"Integer a value is between 10 and 20.";
}
else if (a<30){
	cout<<"Integer a value is between 20 and 30.";
}
else{
	cout<<"Integer a value is greater than 30.";
}
return 0;
}
