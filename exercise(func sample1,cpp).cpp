#include <iostream>
#include <stdlib.h>
using namespace std;
void mainMenu();
void add();
void sub();
void mul();
void div();
int getChoice();
void mainMenu();
void exitProgram();
int main()
{while (true){mainMenu();
switch (getChoice())
{case 1:add();break;
case 2:sub();break;
case 3:mul();break;
case 4:div();break;
case 5:exitProgram();break;
default:cout<<"Invalid input...try again...\n";
break;
}
}
}
void mainMenu(){cout<<"My Math Program \n";
cout<<"(1) Add Number \n";
cout<<"(2)Subtract Number \n";
cout<<"(3)Multiplicate Number \n";
cout<<"(4)Divide Number \n";
cout<<"(5) Exit Program \n";
}
int getChoice (){int choice;
cout<<"Enter Choice:";
cin>>choice;
return choice;
}
int getNum(){int num;
cout<<"Enter a number";
cin>>num;
return num;
}
int caladd (int x,int y){return x+y;}
int calsub (int x,int y){return x-y;}
int calmul (int x,int y){return x*y;}
int caldiv (int x,int y){return x/y;}
void display (int ans){cout<<"The answer is:"<<ans<<"\n";
}
void add(){int num1=getNum();
int num2=getNum();
int ans=caladd (num1,num2);
display(ans);//display (caladd(getNum(),getNum()));
}
void sub(){int num1=getNum();
int num2=getNum();
int ans=calsub(num1,num2);
display(ans);//display (calsub(getNum(),getNum()));
}
void mul(){int num1=getNum();
int num2=getNum();
int ans=calmul(num1,num2);
display(ans);//display (calmul(getNum(),getNum()));
}
void div(){int num1=getNum();
int num2=getNum();
int ans=caldiv(num1,num2);
display(ans);//display (caldiv(getNum(),getNum()));
}
void exitProgram(){cout<<"Thanks for using my program...\n...Goodbye...\n";
exit (0);
}



