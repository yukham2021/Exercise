#include<iostream>
#include<stdlib.h>
using namespace std;
struct Book{
	int id;
	string title;
	string author;
	string subject;
	string publisheddate;
};
struct Book book_list[10];
int array_index=0;
void main_menu();
int getChoice();
void addNewBook();
void viewBook();
void searchBook();
void deleteBook();
void exitProgram();
int main(){
	while(true){
		main_menu();
		switch (getChoice())
		{
		case 1:addNewBook();break;
		case 2:viewBook();break;
		case 3:searchBook();break;
		case 4:deleteBook();break;
		case 5:exitProgram();break;
		}
	}
}
int getChoice(){int choice;
cout<<"Enter choice:";
cin>>choice;
return choice;
}
void main_menu(){
	cout<<"My E-library \n";
	cout<<"[1]Add New Book \n";
	cout<<"[2]View Books \n";
	cout<<"[3]Search Book \n";
	cout<<"[4]Delete Book \n";
	cout<<"[5]Exit Program \n";
}
int getId(){
int id;
cout<<"Enter Book ID";
cin>>id;
return id;
}
string getTitle(){
	string title;
	string dummy;
	getline(cin,dummy);
	cout<<"Enter book title";
	getline(cin,title);
	return title;
}
string getAuthor(){
	string author;
	cout<<"enter author:";
	getline(cin,author);
	return author;
}
string getSubject(){string subject;
	cout<<"Enter subject";
	getline(cin,subject);
	return subject;
}
string getPublisheddate(){
	string publisheddate;
	string dummy;
	getline(cin,dummy);
	cout<<"Enter publisheddate";
	getline(cin,publisheddate);
	return publisheddate;
}
void addNewBook(){book_list[array_index].id=getId();
	book_list[array_index].title=getTitle();
	book_list[array_index].author=getAuthor();
	book_list[array_index].subject=getSubject();
	book_list[array_index].publisheddate=getPublisheddate();
	array_index++;
	cout<<"Successfully added a new book record...\n";
}
void viewBook(){
	cout<<"View Book List \n";
	for(int i=0;i<array_index;i++){
	cout<<"\n..............\n";
	cout<<"Book ID:"<<book_list[i].id<<"\n";
	cout<<"Book title:"<<book_list[i].title<<"\n";
	cout<<"Book author:"<<book_list[i].author<<"\n";
	cout<<"Book subject:"<<book_list[i].subject<<"\n";
	cout<<"Book publisheddate:"<<book_list[i].publisheddate<<"\n";
	cout<<"..............\n";
	}
}
void searchBook(){
	bool found=false;
	int found_index=0;
	cout<<"Search book \n";
	int search_id=getId();
	for(int i=0;i<array_index;i++)
	{found=false;
	if (search_id=book_list[i].id)
	{
		found=true;
		found_index=i;break;
	}
	}
	if(found==true){
		cout<<"Book found......\n";
	}else{
		cout<<"Sorry Book ID not found try again...\n";
	}
}
void deleteBook(){
	bool found=false;
	int found_index=0;
	cout<<"Delete book \n";
	int del_id=getId();
	for(int i=0;i<array_index;i++)
	{
		found=false;
		if(del_id==book_list[i].id)
		{
			found=true;
			found_index=i;break;
		}
	}
	if(found==true){
		book_list [found_index].id=0;
		cout<<"Book Id is deleted......\n";}
		else{cout<<"Sorry Book ID not found....try again...\n";
		
		}

	}

void exitProgram(){
	"thanks for using my program...see you...\n";
	exit(0);
}

