#include<iostream>
#include<stdlib.h>
using namespace std;
string studentlist[10];
int array_index=0;
void mainMenu(){
	cout<<"Student list \n";
	cout<<"Main Menu \n";
	cout<<"(1)Add Name \n";
	cout<<"(2)View Names \n";
	cout<<"(3)Sort Names \n";
	cout<<"(4)Delete Name \n";
	cout<<"(5)Update Name \n";
	cout<<"(6)Exit Program \n";}
int getChoice(){int choice;
cout<<"Enter Choice";
cin>>choice;
return choice;
}
string getName(){string dummy;
string name;
getline(cin,dummy);
cout<<"enter student Name:";
getline(cin,name);
return name;
}
void addName(){cout<<"Add Student Name..\n";
studentlist[array_index]=getName();
array_index++;
cout<<"Successfully added a new name into student list \n";
}
void viewName(){for(int i=0;i<array_index;i++){
	cout<<studentlist[i]<<"\n";
}
}
void sortNames(){string temp;
cout<<"Sorting student names now...\n";
for(int i=0;i<array_index-1;i++){for(int j=i+1;j<array_index;j++){
	if (studentlist[i].compare(studentlist[j])>0)
	{temp=studentlist[i];
	studentlist[i]=studentlist[j];
	studentlist[j]=temp;
	}
}
}
cout<<"Successfully sorted...\n\n";
}
void deleteName(){ bool found=false;
int found_index=0;
cout<<"Delete student name from student list \n";
string delname=getName();
for(int i=0;i<array_index;i++){
	found=false;
	if(delname.compare(studentlist[i])==0)
	{found=true;
	found_index=i;break;
}
}
if(found==true)
{
studentlist[found_index]="";
cout<<"Successfully Deleted \n";}

else {cout<<"Sorry Name not found try again \n";
}}
void updateName()
{bool found=false;
int found_index=0;
string newName;
string dummy;
cout<<"Update student name from student list \n";
string searchName=getName();
for(int i=0;i<array_index;i++){
	found=false;
	if(searchName.compare(studentlist[i])==0)
	{found=true;
	found_index=i;break;
	}
}
if(found==true){getline(cin,dummy);
cout<<"Congratulations Name found"<<studentlist[found_index]<<"\n";
cout<<"Enter a new name";
getline(cin,newName);
studentlist[found_index]=newName;
cout<<"Successfully updated \n";
}}
void exitProgram(){
	cout<<"Thanks for using my program \n Goodbye \n";exit (0);
}
int main()
{while (true){
	mainMenu();
	switch (getChoice())
{
case 1:addName();break;
case 2:viewName();break;
case 3:sortNames();break;
case 4:deleteName();break;
case 5:updateName();break;
case 6:exitProgram();break;}}}


