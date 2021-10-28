#include <iostream>
using namespace std;
void swap_Val(int a,int b)
{int temp;
cout<<"\n within function call by value before swap A:"<<a<<"B:"<<b;
temp=a;
a=b;
b=temp;
cout<<"\n within function call by value after swap A:"<<a<<"B:"<<b;
}
void swap_Ref(int *a,int *b)
{
int temp;
cout<<"\n within function call by Reference before swap A:"<<*a<<"B:"<<*b;
temp=*a;
*a=*b;
*b=temp;
cout<<"\n within function call by Reference after swap A:"<<*a<<"B:"<<*b;}
int main()
{int x,y;
cout<<"Enter value for x and y";
cin>>x>>y;
cout<<"\n X:"<<x<<"\n Y:"<<y;
swap_Val(x,y);
cout<<"\n After function call by Value X:"<<x<<"Y:"<<y<<endl;
swap_Ref(&x,&y);
cout<<"\n After function call by Referencex:"<<x<<"Y:"<<y<<endl;
return 0;
}
