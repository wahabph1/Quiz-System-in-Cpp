#include <iostream>
#include <fstream>
#include <windows.h>
using namespace std;
//ofstream aw("cpp.txt"); // created a file to store data : 


 void java (string name,string roll)
 
 /*function of html mcqs with parameters this will take two parameters from
main program i received here two arguments for to display his name and roll number on cosole and store in file */

 
{
	ofstream aw("JAVA.txt");
	int marks = 0;
	int i=0;
	cout<<"\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n";
	cout<<"\t\t\t\t\t\t\t\t\t JAVA QUIZ QUESTIONS \n\n";
	cout<<"\t\t\t\t\t\t\t\t\twait few seconds please ";
	
	
	for (int j=0; j<4; j++)   // loop used for sleep as well print ... on screen for real system
	{
		cout<<"..";
		Sleep(2000);
	}
	system("CLS");
	
	cout<<"\t\t\t\t\t\t\t\tless than 50%  you will be fail..";
	char a;
	
cout<<"\n\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t\t\t"<<i+1<<") Which of the following is not a Java features?"<<endl<<endl;
cout<<"\t\t\t\t\t\t\t\ta) Dynamic"<<endl;
cout<<"\t\t\t\t\t\t\t\tb) Use of pointers"<<endl;
cout<<"\t\t\t\t\t\t\t\tc) Object-oriented"<<endl;
cout<<"\t\t\t\t\t\t\t\td) all of above"<<endl<<endl<<endl;
cout<<"\t\t\t\t\t\t\t\t chose key : ";
cin>>a;
if (a=='b' || a=='B'){
aw<<i+1<<" : your ans is correct: "<<endl<<endl;
marks++;
}
else {
aw<<i+1<<" : your ans is incorrect : \n\ncorrect ans is : (b)\n\n";

}
i++;
system("CLS");

cout<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl;	


cout<<"\t\t\t\t\t\t\t\t"<<i+1<<")_____ is used to find and fix bugs in the Java programs."<<endl<<endl;
cout<<"\t\t\t\t\t\t\t\ta) JVM"<<endl;
cout<<"\t\t\t\t\t\t\t\tb) JRE"<<endl;
cout<<"\t\t\t\t\t\t\t\tc) JDK"<<endl;
cout<<"\t\t\t\t\t\t\t\td) JDB"<<endl<<endl<<endl;
cout<<"\t\t\t\t\t\t\t\t chose key : ";
cin>>a;
if (a=='d' || a=='D'){
aw<<i+1<<" : your ans is correct: "<<endl<<endl;
marks++;
}
else {
aw<<i+1<<" : your ans is incorrect  \n\n correct ans is : (d)\n\n ";
}system("CLS");
i++;

cout<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl;


cout<<"\t\t\t\t\t\t\t\t"<<i+1<<") Which of the following for loop declaration is not valid?"<<endl<<endl;
cout<<"\t\t\t\t\t\t\t\ta) for ( int i = 20; i >= 2; - -i ) "<<endl;
cout<<"\t\t\t\t\t\t\t\tb) for ( int i = 99; i >= 0; i / 9 ) "<<endl;
cout<<"\t\t\t\t\t\t\t\tc) for ( int i = 2; i <= 20; i = 2* i ) "<<endl;
cout<<"\t\t\t\t\t\t\t\td) none of above "<<endl<<endl<<endl;
cout<<"\t\t\t\t\t\t\t\t chose key : ";
cin>>a;
if (a=='b' || a=='B'){
aw<<i+1<<" : your ans is correct: "<<endl<<endl;
marks++;

}
else {
aw<<i+1<<" : your ans is incorrect \n\ncorrect ans is : (b)\n\n";
}system("CLS");
i++;

cout<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl;

	
cout<<"\t\t\t\t\t\t\t\t"<<i+1<<") Which of the following is a marker interface? "<<endl<<endl;
cout<<"\t\t\t\t\t\t\t\ta) Runnable interface"<<endl;
cout<<"\t\t\t\t\t\t\t\tb) Remote interface "<<endl;
cout<<"\t\t\t\t\t\t\t\tc) Readable interface "<<endl;
cout<<"\t\t\t\t\t\t\t\td) none of above "<<endl<<endl<<endl;
cout<<"\t\t\t\t\t\t\t\t chose key : ";
cin>>a;
if (a=='b' || a=='B'){
aw<<i+1<<" : your ans is correct: "<<endl<<endl;
marks++;
}
else {
aw<<i+1<<" : your ans is incorrect \n\ncorrect ans is : (b)\n\n";
}system("CLS");
i++;

cout<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl;


cout<<"\t\t\t\t\t\t\t\t"<<i+1<<") Which of the following is a reserved keyword in Java?"<<endl;
cout<<"\t\t\t\t\t\t\t\ta) object "<<endl;
cout<<"\t\t\t\t\t\t\t\tb) strictfp"<<endl;
cout<<"\t\t\t\t\t\t\t\tc) main"<<endl;
cout<<"\t\t\t\t\t\t\t\td) system "<<endl<<endl<<endl;
cout<<"\t\t\t\t\t\t\t\t chose key : ";
cin>>a;
if (a=='b' || a=='B'){
aw<<i+1<<" : your ans is correct: "<<endl<<endl;
marks++;
}
else {
aw<<i+1<<" : your ans is incorrect \n\ncorrect ans is : (b)\n\n";
}system("CLS");
i++;

cout<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl;


cout<<"\t\t\t\t\t\t\t\t"<<i+1<<") Which keyword is used for accessing the features of a package ?\n\n";
cout<<"\t\t\t\t\t\t\t\ta) package "<<endl;	
cout<<"\t\t\t\t\t\t\t\tb) import  "<<endl;	
cout<<"\t\t\t\t\t\t\t\tc) extends "<<endl;	
cout<<"\t\t\t\t\t\t\t\td) export " <<endl<<endl<<endl;
cout<<"\t\t\t\t\t\t\t\t chose key : ";		
cin>>a;
if (a=='B' || a=='b'){
aw<<i+1<<" : your ans is correct: "<<endl<<endl;
marks++;
}
else {
aw<<i+1<<"  : your ans is incorrect \n\ncorrect ans is : (b)\n\n";
}
system("CLS");
i++;

	
cout<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl;


cout<<"\t\t\t\t\t\t\t\t"<<i+1<<") In java, jar stands for_____."<<endl<<endl;
cout<<"\t\t\t\t\t\t\t\ta) Java Archive Runner"<<endl;
cout<<"\t\t\t\t\t\t\t\tb) Java Application Resource "<<endl;
cout<<"\t\t\t\t\t\t\t\tc) Java Application Runner  "<<endl;
cout<<"\t\t\t\t\t\t\t\td) None of the above  "<<endl<<endl<<endl;
cout<<"\t\t\t\t\t\t\t\t chose key : ";
cin>>a;
if (a=='d' || a=='d'){aw<<i+1<<" : your ans is correct: "<<endl<<endl;marks++;}
else {aw<<i+1<<" : your ans is incorrect \n\ncorrect ans is : (d)\n\n";}system("CLS");
i++;


cout<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl;


cout<<"\t\t\t\t\t\t\t\t"<<i+1<<") What is the extension of java code files?"<<endl<<endl;
cout<<"\t\t\t\t\t\t\t\ta) .js "<<endl;
cout<<"\t\t\t\t\t\t\t\tb) .txt"<<endl;
cout<<"\t\t\t\t\t\t\t\tc) .class"<<endl;
cout<<"\t\t\t\t\t\t\t\td) .java "<<endl<<endl<<endl;
cout<<"\t\t\t\t\t\t\t\t chose key : ";
cin>>a;
if (a=='D' || a=='d'){aw<<i+1<<" : your ans is correct: "<<endl<<endl;marks++;}
else {aw<<i+1<<" : your ans is incorrect \n\ncorrect ans is : (d)\n\n";}system("CLS"); //break;	
i++;

cout<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl;	


cout<<"\t\t\t\t\t\t\t\t"<<i+1<<") Which of the following is not an OOPS concept in Java?\n\n";
cout<<"\t\t\t\t\t\t\t\ta)  Polymorphism"<<endl;
cout<<"\t\t\t\t\t\t\t\tb)  Inheritance"<<endl;
cout<<"\t\t\t\t\t\t\t\tc)  Compilation"<<endl;
cout<<"\t\t\t\t\t\t\t\td)  Encapsulatione"<<endl<<endl<<endl;
cout<<"\t\t\t\t\t\t\t\t chose key : ";
cin>>a;
if (a=='C' || a=='c'){aw<<i+1<<" : your ans is correct: "<<endl<<endl;marks++;}
else {aw<<i+1<<" : your ans is incorrect \n\ncorrect ans is : (c)\n\n";}system("CLS"); //break;	
i++;


cout<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl;	


cout<<"\t\t\t\t\t\t\t\t"<<i+1<<") Which of these keywords is used to define interfaces in Java?"<<endl<<endl;
cout<<"\t\t\t\t\t\t\t\ta) intf"<<endl;
cout<<"\t\t\t\t\t\t\t\tb) Intf"<<endl;
cout<<"\t\t\t\t\t\t\t\tc) interfacee"<<endl;
cout<<"\t\t\t\t\t\t\t\td) Interface" <<endl<<endl<<endl;
cout<<"\t\t\t\t\t\t\t\t chose key : ";
cin>>a;
if (a=='c' || a=='C'){aw<<i+1<<" : your ans is correct: "<<endl<<endl;marks++;}
	else {aw<<i+1<<" : your ans is incorrect \n\ncorrect ans is : (c)\n\n";	}
	system("CLS");
	
	cout<<"\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n \t\t\t\t\t\tNAME :"<<"    "<<name<<"\n\n\n\n\n";
			cout<<"\t\t\t\t\t\tROLL NUM :"<<"    "<<roll<<"\n\n\n";
			aw<<"\n\n\n\n\t\t\t\t\t\t\t\tYOUR DATA:\n\n";
			aw<<"\n\n\n\n\t\t\t\t\t\t NAME : "<<"     "<<name<<"\n\n\n\n\n";
			aw<<"\t\t\t\t\t\t ROLL NUM :"<<"   "<<roll<<"\n\n";
			
			
	int per;
	per = 100*marks/10;
	cout<<"\n\n\n\t\t\t\t\t\tTotal Marks = "<<marks<<" Out of 10 "<<endl<<endl<<endl<<endl;
	cout<<"\t\t\t\t\t\tpercentage is = "<<per<<"%"<<endl<<endl<<endl<<endl;
	

	aw<<"\n\n\n\t\t\t\t\t\tTotal Marks = "<<marks<<" Out of 10 \n\n\n\n"; // this will save data in the file
	aw<<"\t\t\t\t\t\tpercentage is = "<<per<<"%\n\n\n\n";    // this will save data in the file
	
	
	if (per >=50 )
	{
		cout<<"\t\t\t\t\t\tRESULT :  PASS";
		
		aw<<"\t\t\t\t\t\tRESULT :  PASS";  // this will save data in the file
		
	}
	else {
		cout<<"\t\t\t\t\t\tRESULT : FAIL "<<endl;
		
		aw<<"\t\t\t\t\t\tRESULT : FAIL "<<endl;  // this will save data in the file
	}
	
	
	
	
	
} // end of function body

	
