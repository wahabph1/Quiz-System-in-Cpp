#include <iostream>
#include <fstream>
#include <windows.h>
using namespace std;
//ofstream aw("cpp.txt"); // created a file to store data : 


pyth (string name,string roll)

/*function of html mcqs with parameters this will take two parameters from
main program i received here two arguments for to display his name and roll number on cosole and store in file */


{
	ofstream aw("PYTHON.txt");
	int marks = 0;
	int i=0;
	cout<<"\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n";
	cout<<"\t\t\t\t\t\t\t\t\t PYTHON QUIZ QUESTIONS \n\n";
	cout<<"\t\t\t\t\t\t\t\t\twait few seconds please ";
	
	
	for (int j=0; j<4; j++)  // loop used for sleep as well print ... on screen for real system
	{
		cout<<"..";
		Sleep(2000);
	}
	system("CLS");
	
	cout<<"\t\t\t\t\t\t\t\tless than 50%  you will be fail..";
	char a;
	
cout<<"\n\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t\t\t"<<i+1<<") Which type of Programming does Python support?"<<endl<<endl;
cout<<"\t\t\t\t\t\t\t\ta)  object-oriented programming "<<endl;
cout<<"\t\t\t\t\t\t\t\tb)  structured programmingointers "<<endl;
cout<<"\t\t\t\t\t\t\t\tc)  functional programmingriented "<<endl;
cout<<"\t\t\t\t\t\t\t\td)  all of the mentioned "<<endl<<endl<<endl;
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
cout<<"\t\t\t\t\t\t\t\t"<<i+1<<") which of the following is the correct extension of the Python file? "<<endl<<endl;
cout<<"\t\t\t\t\t\t\t\ta)  p"<<endl;
cout<<"\t\t\t\t\t\t\t\tb) .ph"<<endl;
cout<<"\t\t\t\t\t\t\t\tc) .exe"<<endl;
cout<<"\t\t\t\t\t\t\t\td) .py"<<endl<<endl<<endl;
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


cout<<"\t\t\t\t\t\t\t\t"<<i+1<<") All keywords in Python are in _________"<<endl<<endl;
cout<<"\t\t\t\t\t\t\t\ta) Capitalized "<<endl;
cout<<"\t\t\t\t\t\t\t\tb) lower case"<<endl;
cout<<"\t\t\t\t\t\t\t\tc) UPPER CASE "<<endl;
cout<<"\t\t\t\t\t\t\t\td) None of the mentioned "<<endl<<endl<<endl;
cout<<"\t\t\t\t\t\t\t\t chose key : ";
cin>>a;
if (a=='d' || a=='D'){
aw<<i+1<<" : your ans is correct: "<<endl<<endl;
marks++;

}
else {
aw<<i+1<<" : your ans is incorrect \n\ncorrect ans is : (d)\n\n";
}system("CLS");
i++;

cout<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl;	


cout<<"\t\t\t\t\t\t\t\t"<<i+1<<") Which keyword is used for function in Python language? "<<endl<<endl;
cout<<"\t\t\t\t\t\t\t\ta) Function"<<endl;
cout<<"\t\t\t\t\t\t\t\tb) def "<<endl;
cout<<"\t\t\t\t\t\t\t\tc) Fun"<<endl;
cout<<"\t\t\t\t\t\t\t\td) Define"<<endl<<endl<<endl;
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


cout<<"\t\t\t\t\t\t\t\t"<<i+1<<") Which one of the following is not a keyword in Python language?"<<endl;
cout<<"\t\t\t\t\t\t\t\ta) pass "<<endl;
cout<<"\t\t\t\t\t\t\t\tb) eval"<<endl;
cout<<"\t\t\t\t\t\t\t\tc) assert"<<endl;
cout<<"\t\t\t\t\t\t\t\td) nonlocal"<<endl<<endl<<endl;
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


cout<<"\t\t\t\t\t\t\t\t"<<i+1<<") Which of the following statements is used to create an empty set in Python ?\n\n";
cout<<"\t\t\t\t\t\t\t\ta) ( ) "<<endl;	
cout<<"\t\t\t\t\t\t\t\tb) [ ] "<<endl;	
cout<<"\t\t\t\t\t\t\t\tc) { } "<<endl;	
cout<<"\t\t\t\t\t\t\t\td) set()" <<endl<<endl<<endl;
cout<<"\t\t\t\t\t\t\t\t chose key : ";		
cin>>a;
if (a=='d' || a=='D'){
aw<<i+1<<" : your ans is correct: "<<endl<<endl;
marks++;
}
else {
aw<<i+1<<"  : your ans is incorrect \n\ncorrect ans is : (b)\n\n";
}
system("CLS");
i++;

	
cout<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl;


cout<<"\t\t\t\t\t\t\t\t"<<i+1<<") What are the two main types of functions in Python? "<<endl<<endl;
cout<<"\t\t\t\t\t\t\t\ta) System function"<<endl;
cout<<"\t\t\t\t\t\t\t\tb) Custom function"<<endl;
cout<<"\t\t\t\t\t\t\t\tc) Built-in function & User defined function "<<endl;
cout<<"\t\t\t\t\t\t\t\td) User function"<<endl<<endl<<endl;
cout<<"\t\t\t\t\t\t\t\t chose key : ";
cin>>a;
if (a=='c' || a=='c'){aw<<i+1<<" : your ans is correct: "<<endl<<endl;marks++;}
else {aw<<i+1<<" : your ans is incorrect \n\ncorrect ans is : (c)\n\n";}system("CLS");
i++;


cout<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl;


cout<<"\t\t\t\t\t\t\t\t"<<i+1<<") Which of the following is a Python tuple?"<<endl<<endl;
cout<<"\t\t\t\t\t\t\t\ta) {1, 2, 3} "<<endl;
cout<<"\t\t\t\t\t\t\t\tb) {}" <<endl;
cout<<"\t\t\t\t\t\t\t\tc) [1, 2, 3] "<<endl;
cout<<"\t\t\t\t\t\t\t\td) (1, 2, 3) " <<endl<<endl<<endl;
cout<<"\t\t\t\t\t\t\t\t chose key : ";
cin>>a;
if (a=='D' || a=='d'){aw<<i+1<<" : your ans is correct: "<<endl<<endl;marks++;}
else {aw<<i+1<<" : your ans is incorrect \n\ncorrect ans is : (d)\n\n";}system("CLS");
i++;

cout<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl;

	
cout<<"\t\t\t\t\t\t\t\t"<<i+1<<") Amongst which of the following is / are the logical operators in Python?\n\n";
cout<<"\t\t\t\t\t\t\t\ta) and"<<endl;
cout<<"\t\t\t\t\t\t\t\tb) or "<<endl;
cout<<"\t\t\t\t\t\t\t\tc) not"<<endl;
cout<<"\t\t\t\t\t\t\t\td) All of the mentioned above "<<endl<<endl<<endl;
cout<<"\t\t\t\t\t\t\t\t chose key : ";
cin>>a;
if (a=='d' || a=='D'){aw<<i+1<<" : your ans is correct: "<<endl<<endl;marks++;}
else {aw<<i+1<<" : your ans is incorrect \n\ncorrect ans is : (c)\n\n";}system("CLS");	
i++;

cout<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl;	
cout<<"\t\t\t\t\t\t\t\t"<<i+1<<") list, tuple, and range are the ___ of Data Types."<<endl<<endl;
cout<<"\t\t\t\t\t\t\t\ta) Sequence Types "<<endl;
cout<<"\t\t\t\t\t\t\t\tb) Binary Types "<<endl;
cout<<"\t\t\t\t\t\t\t\tc) Boolean Typesfacee"<<endl;
cout<<"\t\t\t\t\t\t\t\td) None of the mentioned above" <<endl<<endl<<endl;
cout<<"\t\t\t\t\t\t\t\t chose key : ";
cin>>a;
if (a=='a' || a=='A'){aw<<i+1<<" : your ans is correct: "<<endl<<endl;marks++;}
	else {aw<<i+1<<" : your ans is incorrect \n\ncorrect ans is : (a)\n\n";	}
	system("CLS");
	
	
	// for print data on screen as well as on file..	
	
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
	
}  // end body of function

	
