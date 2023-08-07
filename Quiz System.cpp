#include <iostream>
#include <fstream>
#include <conio.h>
#include "cpp 3.h"
#include "html.h"
#include "java.h"
#include "python.h"
#include <windows.h>
using namespace std;
class A {
string name, roll;	
public : 
void show1()
{
	cout<<"\n\n\n\n\n\n\n\n";
	cout<<"\t\t\t\t\t\t***********"<<endl;
	cout<<"\t\t\t\t\t\tQUIZ SYSTEM "<<endl;
	cout<<"\t\t\t\t\t\t***********\n\n\n";
	cout<<"\tt\t\t\t\t\t|NAME| :";
	getline(cin,name);
	cout<<endl<<endl;
	cout<<"\t\t\t\t\t\t|ROLL NUM|:   ";
	getline(cin,roll);
	system ("CLS"); 
	
	
	cout<<"\n\n\n\n\n\n\n\n\n\n\n\n\n";
	cout<<"\t\t\t\t\t\t\t\twhich Quiz you want to solve ?? \n\n";
	cout<<"\t\t\t\t\t\t\t\t1) c++ \n";
	cout<<"\t\t\t\t\t\t\t\t2) HTML \n";
	cout<<"\t\t\t\t\t\t\t\t3) JAVA \n";
	cout<<"\t\t\t\t\t\t\t\t4) PYTHON \n\n";
	
	char var;
	cout<<"\t\t\t\t\t\t\t\tEnter key : ";
	var=getch();
	system("CLS");
	switch (var)
	{
		case '1' :
			cpp(name,roll);
			break;
			case '2':	
			html(name,roll); 
			break;
			case '3':
			java (name,roll);
			break;
			case '4':
			pyth (name,roll);
			break;	
			default :
			cout<<"Invalid choice : ";
			break;
			}
			
}

};
int main ()
{
	char c;
	A aa;
	do {
	   aa.show1();
	        cout<<"\n\n\n\n\n\n\n\n\n\n\n";
			cout<<"\t\t\t\t\t\tDo you want to again Quiz  ?? for yes enter y otherwise press any key to terminate :"<<endl;
			c=getch();
			system("CLS");
			cout<<"\t\t\t\t\t**********************"<<endl;
			cout<<"\t\t\t\t\tAPPLICATION TERMINATED :"<<endl;
			cout<<"\t\t\t\t\t**********************";
			cin.ignore();
	 }
	 while (c=='y');
}
