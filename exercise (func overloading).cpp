#include<iostream>
using namespace std;
int add1(int x,int y){
	return x+y;
}
float add2(float x,float y){
	return x+y;
}
double add3(double x,double y){
	return x+y;
}
int main(){int a=9;
int b=3;
float c=8.5;
double d=3.14;
int ans1=add1(a,b);
cout<<"The answer 1 is:"<<ans1<<"\n";
float ans2=add1(b,c);
cout<<"The answer 2 is:"<<ans2<<"\n";
double ans3=add1(c,d);
cout<<"The answer 3 is:"<<ans3<<"\n";
}
