#include<iostream>
using namespace std;
void sphere();
void cube(int,int,int);
void cone();
float cylinder();
int main()
{int ch;
for (;;)//infinite loop
{
	cout<<"\n 1.volume of Sphere";
	cout<<"\n 2.volume of Rectanble cube";
	cout<<"\n 3.volume of solid right circrlar cone";
	cout<<"\n 4.volume of Cylinder";
	cout<<"\n 5.Exit";
	cin>>ch;
	switch(ch)
	{case 1:sphere ();break;
	case 2:cube(10,5,6);break;
	case 3:cone();break;
	case 4:cout<<"Volume of Cylinder"<<cylinder();break;
	case 5:break;
	}
	if (ch==5)break;
	}
	
	return 0;
}
void sphere()
{float r,a;
cout<<"Enter radius";
cin>>r;
a=((float)4/3)*3.14*r*r*r;
cout<<"Volume of the Sphere"<<a;}
void cube (int w,int l,int h)
{
cout<<"Volume of Rectangle cube"<<w*l*h;
}
void cone()
{float r,a,h;
cout<<"Enter radius";
cin>>r;
cout<<"Enter heigh";
cin>>h;
a=(float)((1.0/3.0)*3.14*r*r*h);
cout<<"Volume of the cone"<<a;}
float cylinder()
{float r,a,h;
cout<<"Enter radius";
cin>>r;
cout<<"Enter height";
cin>>h;
a=(float)((4.0/3)*3.14*r*r*h);
return a;}

