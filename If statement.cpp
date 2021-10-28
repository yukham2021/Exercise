#include<iostream>
using namespace std;
int main()
{int qty,dis=0;
float rate,tot;
cout<<"\n Enter the quantity";
cin>>qty;
cout<<"\n Enter the rate";
cin>>rate;
if (qty>500)
dis=10;
tot=(qty*rate)-(qty*rate*dis/100);
cout<<"The total expenses is"<<tot;
	
	
	return 0;
	
}
