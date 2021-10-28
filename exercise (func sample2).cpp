# include <iostream>
# include <conio.h>
#include <stdlib.h>
using namespace std;
int add(int ,int );//func prototype
int subtract(int ,int );
int multiply(int ,int );
int divide(int ,int );
int main()
{int a,b;
cout<<"Enter any two number:";
cin>>a>>b;
cout<<"\n Summation="<<add(a,b);
cout<<"\n Subtraction="<<subtract(a,b);
cout<<"\n Multiplication="<<multiply(a,b);
cout<<"\n Division="<<divide(a,b);}
int add (int x,int y)//func definition
{int res;
res=x+y;
return res;}
int subtract(int x,int y)//func defintion
{
int res;
res=x-y;
return res;}
int multiply(int x,int y)//func definition
{int res;
res=x*y;
return res;}
int divide(int x, int y)
{if (y==0)
{cout<<"\n \n Divide by Zero Error...!!";
cout<<"\n Press any key to exit..";
exit (1);
}
else {int res;
res=x/y;
return res;
}
}


