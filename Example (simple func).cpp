#include <iostream>
using namespace std;
void starline();//function declaration (prototype)
int main()
{starline();
cout<<"Data type \t Range"<<endl;
starline();
cout<<"char \t -128 to 127"<<endl;
cout<<"int \t -32786 to 32786"<<endl;
starline();
return 0;
}
void starline()
{for (int i=0;i<20;i++)
cout<<"*"<<"";
cout<<endl;
}
