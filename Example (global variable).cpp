#include<iostream>
using namespace std;
int count; /*count is global*/
void func1();
int main()
{count=100;
func1();
return 0;
}
void func1()
{int temp;
temp=count;
cout<<"count is"<<count;
}
