#include <iostream>
using namespace std;
int main()
{int age,password;
cout<<"enter your age:";
cin>>age;
if(age>18){
	cout<<"Enter your password";
	cin>>password;
	if (password==1234){
		cout<<"Your login is successfully";
	}
	else{
		cout<<"Password Incorrect";
	}
	}
else{
	cout<<"Your age is young.";
}
return 0;}
