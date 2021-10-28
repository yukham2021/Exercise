#include<iostream>
using namespace std;
int z;
void add (int x,int y)
{z=x+y;
cout<<"x"<<x<<endl;
cout<<"y"<<y<<endl;
cout<<"Addition:"<<z;
}
void multiplication(int x,int y)
{z=x*y;
cout<<"x:"<<x<<endl;
cout<<"y:"<<y<<endl;
cout<<"Multiplication:"<<z;
}
int main()
{int ch,a,b;
for(;;)
{cout<<"\n1.Addition";
cout<<"\n2.Multiplication";
cout<<"\n3.Exit";
cout<<"\nWhich one?";
cin>>ch;
if(ch==3)
break;
cout<<"Enter value for a";
cin>>a;
cout<<"Enter value for b";
cin>>b;
switch (ch)
{case 1:add(a,b);break;
case 2:multiplication(a,b);break;
}
}
return 0;}
