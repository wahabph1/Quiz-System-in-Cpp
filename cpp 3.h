#include <iostream>
#include <fstream>
#include <windows.h>
using namespace std;
ofstream aw("cpp.txt"); // created a file to store data all users :

  
cpp (string name,string roll)
/*function of html mcqs with parameters this will take two parameters from
main program i received here two arguments for to display his name and roll number on cosole and store in file */



{
//	ofstream aw("cpp.txt"); this will store only one object data
	int marks = 0;
	int i=0;
	cout<<"\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n";
	cout<<"\t\t\t\t\t\t\t\t\t c++ QUIZ QUESTIONS \n\n";
	cout<<"\t\t\t\t\t\t\t\t\twait few seconds please ";
	
	for (int j=0; j<4; j++)  // loop used for sleep as well print ... on screen for real system
	{
		cout<<"..";
		Sleep(2000);
	}
	system("CLS");
	
	cout<<"\t\t\t\t\t\t\t\tless than 50%  you will be fail..";
	char a;
	
cout<<"\n\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t\t\t"<<i+1<<") How many types of elements can an array store?"<<endl<<endl;
cout<<"\t\t\t\t\t\t\t\ta) Same types of elements"<<endl;
cout<<"\t\t\t\t\t\t\t\tb) Char and int type"<<endl;
cout<<"\t\t\t\t\t\t\t\tc) Only char types"<<endl;
cout<<"\t\t\t\t\t\t\t\td) All "<<endl<<endl<<endl;
cout<<"\t\t\t\t\t\t\t\t chose key : ";
cin>>a;
if (a=='a' || a=='A'){
aw<<i+1<<" : your ans is correct: "<<endl<<endl;
marks++;
}
else {
aw<<i+1<<" : your ans is incorrect : \n\ncorrect ans is : (a)\n\n";

}
i++;
system("CLS");
cout<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl;

	
cout<<"\t\t\t\t\t\t\t\t"<<i+1<<") Which of the following is the correct syntax to add the header file in the C++ program?"<<endl<<endl;
cout<<"\t\t\t\t\t\t\t\ta) #include<userdefined>"<<endl;
cout<<"\t\t\t\t\t\t\t\tb) #include userdefined.h"<<endl;
cout<<"\t\t\t\t\t\t\t\tc) <include> userdefined.h"<<endl;
cout<<"\t\t\t\t\t\t\t\td) Both A and B"<<endl<<endl<<endl;
cout<<"\t\t\t\t\t\t\t\t chose key : ";
cin>>a;
if (a=='d' || a=='d'){
aw<<i+1<<" : your ans is correct: "<<endl<<endl;
marks++;
}
else {
aw<<i+1<<" : your ans is incorrect  \n\n correct ans is : (d)\n\n ";
}system("CLS");
i++;

cout<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl;


cout<<"\t\t\t\t\t\t\t\t"<<i+1<<") Which of the following is the correct syntax to print the message in C++ language?"<<endl<<endl;
cout<<"\t\t\t\t\t\t\t\ta) cout<<Hello world!"<<endl;
cout<<"\t\t\t\t\t\t\t\tb) cout<< Hello world! "<<endl;
cout<<"\t\t\t\t\t\t\t\tc) out<< Hello world!"<<endl;
cout<<"\t\t\t\t\t\t\t\td) None of the above"<<endl<<endl<<endl;
cout<<"\t\t\t\t\t\t\t\t chose key : ";
cin>>a;
if (a=='d' || a=='d'){
aw<<i+1<<" : your ans is correct: "<<endl<<endl;
marks++;

}
else {
aw<<i+1<<" : your ans is incorrect \n\ncorrect ans is : (d)\n\n";
}system("CLS");
i++;

cout<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl;

	
cout<<"\t\t\t\t\t\t\t\t"<<i+1<<") Which of the following is the address operator?"<<endl<<endl;
cout<<"\t\t\t\t\t\t\t\ta) @ "<<endl;
cout<<"\t\t\t\t\t\t\t\tb) # "<<endl;
cout<<"\t\t\t\t\t\t\t\tc) & "<<endl;
cout<<"\t\t\t\t\t\t\t\td) % "<<endl<<endl<<endl;
cout<<"\t\t\t\t\t\t\t\t chose key : ";
cin>>a;
if (a=='c' || a=='C'){
aw<<i+1<<" : your ans is correct: "<<endl<<endl;
marks++;
}
else {
aw<<i+1<<" : your ans is incorrect \n\ncorrect ans is : (c)\n\n";
}system("CLS");
i++;

cout<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl;


cout<<"\t\t\t\t\t\t\t\t"<<i+1<<") Which of the following features must be supported by any programming language to become a pure"<<endl;
cout<<"\t\t\t\t\t\t\t\tobject-oriented programming language? "<<endl<<endl;
cout<<"\t\t\t\t\t\t\t\ta) Encapsulation "<<endl;
cout<<"\t\t\t\t\t\t\t\tb)Inheritance"<<endl;
cout<<"\t\t\t\t\t\t\t\tc)Polymorphism"<<endl;
cout<<"\t\t\t\t\t\t\t\td)All of the above"<<endl<<endl<<endl;
cout<<"\t\t\t\t\t\t\t\t chose key : ";
cin>>a;
if (a=='d' || a=='D'){
aw<<i+1<<" : your ans is correct: "<<endl<<endl;
marks++;
}
else {
aw<<i+1<<" : your ans is incorrect \n\ncorrect ans is : (a)\n\n";
}system("CLS");
i++;

cout<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl;


cout<<"\t\t\t\t\t\t\t\t"<<i+1<<")The C++ language is ______ object-oriented language.\n\n";
cout<<"\t\t\t\t\t\t\t\ta) Pure Object oriented"<<endl;	
cout<<"\t\t\t\t\t\t\t\tb) Not Object oriented"<<endl;	
cout<<"\t\t\t\t\t\t\t\tc) Semi Object-oriented or Partial Object-oriented"<<endl;	
cout<<"\t\t\t\t\t\t\t\td) None of the above"<<endl<<endl<<endl;
cout<<"\t\t\t\t\t\t\t\t chose key : ";		
cin>>a;
if (a=='c' || a=='C'){
aw<<i+1<<" : your ans is correct: "<<endl<<endl;
marks++;
}
else {
aw<<i+1<<"  : your ans is incorrect \n\ncorrect ans is : (c)\n\n";
}
system("CLS");
i++;

	
cout<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl;


cout<<"\t\t\t\t\t\t\t\t"<<i+1<<")Which of the following comment syntax is correct to create a single-line comment in the C++ program?"<<endl<<endl;
cout<<"\t\t\t\t\t\t\t\ta) //Comment"<<endl;
cout<<"\t\t\t\t\t\t\t\tb) /Comment/"<<endl;
cout<<"\t\t\t\t\t\t\t\tc) Comment//"<<endl;
cout<<"\t\t\t\t\t\t\t\td) None of the above"<<endl<<endl<<endl;
cout<<"\t\t\t\t\t\t\t\t chose key : ";
cin>>a;
if (a=='a' || a=='A'){aw<<i+1<<" : your ans is correct: "<<endl<<endl;marks++;}
else {aw<<i+1<<" : your ans is incorrect \n\ncorrect ans is : (a)\n\n";}system("CLS");
i++;


cout<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl;


cout<<"\t\t\t\t\t\t\t\t"<<i+1<<") C++ is a ___ type of language."<<endl<<endl;
cout<<"\t\t\t\t\t\t\t\ta) High-level Language"<<endl;
cout<<"\t\t\t\t\t\t\t\tb) Low-level language"<<endl;
cout<<"\t\t\t\t\t\t\t\tc) Middle-level language"<<endl;
cout<<"\t\t\t\t\t\t\t\td) None of the above"<<endl<<endl<<endl;
cout<<"\t\t\t\t\t\t\t\t chose key : ";
cin>>a;
if (a=='c' || a=='C'){aw<<i+1<<" : your ans is correct: "<<endl<<endl;marks++;}
else {aw<<i+1<<" : your ans is incorrect \n\ncorrect ans is : (c)\n\n";}system("CLS"); //break;	
i++;

cout<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl;	


cout<<"\t\t\t\t\t\t\t\t"<<i+1<<")Which of the following is the correct syntax for declaring the array?\n\n";
cout<<"\t\t\t\t\t\t\t\ta) init array []"<<endl;
cout<<"\t\t\t\t\t\t\t\tb) int array [5]"<<endl;
cout<<"\t\t\t\t\t\t\t\tc) Array[5]"<<endl;
cout<<"\t\t\t\t\t\t\t\td) None of the above"<<endl<<endl<<endl;
cout<<"\t\t\t\t\t\t\t\t chose key : ";
cin>>a;
if (a=='b' || a=='B'){aw<<i+1<<" : your ans is correct: "<<endl<<endl;marks++;}
else {aw<<i+1<<" : your ans is incorrect \n\ncorrect ans is : (b)\n\n";}system("CLS"); //break;	
i++;

cout<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl;	


cout<<"\t\t\t\t\t\t\t\t"<<i+1<<") Which of the following is the correct syntax for printing the address of the first element?"<<endl<<endl;
cout<<"\t\t\t\t\t\t\t\ta) array[0]"<<endl;
cout<<"\t\t\t\t\t\t\t\tb) array[1];"<<endl;
cout<<"\t\t\t\t\t\t\t\tc) array[2];"<<endl;
cout<<"\t\t\t\t\t\t\t\td) None of the above"<<endl<<endl<<endl;
cout<<"\t\t\t\t\t\t\t\t chose key : ";
cin>>a;
if (a=='d' || a=='d'){aw<<i+1<<" : your ans is correct: "<<endl<<endl;marks++;}
	else {aw<<i+1<<" : your ans is incorrect \n\ncorrect ans is : (d)\n\n";	}
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
	
	
	
	
	
} // end of body functopn 

	

	
