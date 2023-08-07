#include <iostream>
#include <fstream>
#include <windows.h>
using namespace std;
//ofstream aw("cpp.txt"); // created a file to store data :

 
html (string name,string roll)
/*function of html mcqs with parameters this will take two parameters from
main program i received here two arguments for to display his name and roll number on cosole and store in file */


{
	ofstream aw("html.txt");
	int marks = 0;
	int i=0;
	cout<<"\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n";
	cout<<"\t\t\t\t\t\t\t\t\t HTML QUIZ QUESTIONS \n\n";
	cout<<"\t\t\t\t\t\t\t\t\twait few seconds please ";
	
	for (int j=0; j<4; j++)  // loop used for sleep as well print ... on screen for real system
 	{
		cout<<"..";
		Sleep(2000);  
	}
	system("CLS");
	
	cout<<"\t\t\t\t\t\t\t\tless than 50%  you will be fail..";
	char a;

	
cout<<"\n\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t\t\t"<<i+1<<") HTML is what type of language ?"<<endl<<endl;
cout<<"\t\t\t\t\t\t\t\ta) Scripting Language"<<endl;
cout<<"\t\t\t\t\t\t\t\tb) Markup Language"<<endl;
cout<<"\t\t\t\t\t\t\t\tc) Programming Language "<<endl;
cout<<"\t\t\t\t\t\t\t\td) Network Protocol"<<endl<<endl<<endl;
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


cout<<"\t\t\t\t\t\t\t\t"<<i+1<<") HTML uses"<<endl<<endl;
cout<<"\t\t\t\t\t\t\t\ta) Pre-specified tags"<<endl;
cout<<"\t\t\t\t\t\t\t\tb) User defined tags"<<endl;
cout<<"\t\t\t\t\t\t\t\tc) Fixed tags defined by the language"<<endl;
cout<<"\t\t\t\t\t\t\t\td) Tags only for linking"<<endl<<endl<<endl;
cout<<"\t\t\t\t\t\t\t\t chose key : ";
cin>>a;
if (a=='c' || a=='C'){
aw<<i+1<<" : your ans is correct: "<<endl<<endl;
marks++;
}
else {
aw<<i+1<<" : your ans is incorrect  \n\n correct ans is : (c)\n\n ";
}system("CLS");
i++;

cout<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl;


cout<<"\t\t\t\t\t\t\t\t"<<i+1<<") Fundamental HTML Block is known as "<<endl<<endl;
cout<<"\t\t\t\t\t\t\t\ta) HTML Body"<<endl;
cout<<"\t\t\t\t\t\t\t\tb) HTML Tag "<<endl;
cout<<"\t\t\t\t\t\t\t\tc) HTML Element"<<endl;
cout<<"\t\t\t\t\t\t\t\td) HTML Attribute"<<endl<<endl<<endl;
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


cout<<"\t\t\t\t\t\t\t\t"<<i+1<<")What is the full form of HTML?"<<endl<<endl;
cout<<"\t\t\t\t\t\t\t\ta) Hyper Teach Markup Language"<<endl;
cout<<"\t\t\t\t\t\t\t\tb) HyperText Markup Language "<<endl;
cout<<"\t\t\t\t\t\t\t\tc) all "<<endl;
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


cout<<"\t\t\t\t\t\t\t\t"<<i+1<<") How can you make a bulleted list with numbers?"<<endl;
cout<<"\t\t\t\t\t\t\t\ta) <ol> "<<endl;
cout<<"\t\t\t\t\t\t\t\tb) <ul> "<<endl;
cout<<"\t\t\t\t\t\t\t\tc) <list>"<<endl;
cout<<"\t\t\t\t\t\t\t\td)All of the above"<<endl<<endl<<endl;
cout<<"\t\t\t\t\t\t\t\t chose key : ";
cin>>a;
if (a=='a' || a=='A'){
aw<<i+1<<" : your ans is correct: "<<endl<<endl;
marks++;
}
else {
aw<<i+1<<" : your ans is incorrect \n\ncorrect ans is : (a)\n\n";
}system("CLS");
i++;

cout<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl;


cout<<"\t\t\t\t\t\t\t\t"<<i+1<<") Which of the following is not a browser ?\n\n";
cout<<"\t\t\t\t\t\t\t\ta) Netscape Navigator"<<endl;	
cout<<"\t\t\t\t\t\t\t\tb) opera"<<endl;	
cout<<"\t\t\t\t\t\t\t\tc) mozila firefox "<<endl;	
cout<<"\t\t\t\t\t\t\t\td) microsofts bing "<<endl<<endl<<endl;
cout<<"\t\t\t\t\t\t\t\t chose key : ";		
cin>>a;
if (a=='D' || a=='d'){
aw<<i+1<<" : your ans is correct: "<<endl<<endl;
marks++;
}
else {
aw<<i+1<<"  : your ans is incorrect \n\ncorrect ans is : (d)\n\n";
}
system("CLS");
i++;

	
cout<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl;


cout<<"\t\t\t\t\t\t\t\t"<<i+1<<") Which HTML tag produces the biggest heading?"<<endl<<endl;
cout<<"\t\t\t\t\t\t\t\ta) </h1>"<<endl;
cout<<"\t\t\t\t\t\t\t\tb) </h2>"<<endl;
cout<<"\t\t\t\t\t\t\t\tc) </h9>"<<endl;
cout<<"\t\t\t\t\t\t\t\td) None of the above"<<endl<<endl<<endl;
cout<<"\t\t\t\t\t\t\t\t chose key : ";
cin>>a;
if (a=='a' || a=='A'){aw<<i+1<<" : your ans is correct: "<<endl<<endl;marks++;}
else {aw<<i+1<<" : your ans is incorrect \n\ncorrect ans is : (a)\n\n";}system("CLS");
i++;


cout<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl;


cout<<"\t\t\t\t\t\t\t\t"<<i+1<<") Which tag do we use in HTML for inserting a line-break?"<<endl<<endl;
cout<<"\t\t\t\t\t\t\t\ta) <a>"<<endl;
cout<<"\t\t\t\t\t\t\t\tb) <br>"<<endl;
cout<<"\t\t\t\t\t\t\t\tc) <pre>"<<endl;
cout<<"\t\t\t\t\t\t\t\td) None of the above"<<endl<<endl<<endl;
cout<<"\t\t\t\t\t\t\t\t chose key : ";
cin>>a;
if (a=='B' || a=='b'){aw<<i+1<<" : your ans is correct: "<<endl<<endl;marks++;}
else {aw<<i+1<<" : your ans is incorrect \n\ncorrect ans is : (b)\n\n";}system("CLS"); 
i++;

cout<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl;	


cout<<"\t\t\t\t\t\t\t\t"<<i+1<<") In HTML, we use the <hr> tag for ___________.\n\n";
cout<<"\t\t\t\t\t\t\t\ta) horizontal ruler "<<endl;
cout<<"\t\t\t\t\t\t\t\tb)  new paragraph "<<endl;
cout<<"\t\t\t\t\t\t\t\tc)  vertical ruler "<<endl;
cout<<"\t\t\t\t\t\t\t\td) None of the above"<<endl<<endl<<endl;
cout<<"\t\t\t\t\t\t\t\t chose key : ";
cin>>a;
if (a=='a' || a=='A'){aw<<i+1<<" : your ans is correct: "<<endl<<endl;marks++;}
else {aw<<i+1<<" : your ans is incorrect \n\ncorrect ans is : (a)\n\n";}system("CLS"); 
i++;

cout<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl;	


cout<<"\t\t\t\t\t\t\t\t"<<i+1<<") Which one is the HTML document’s root tag?"<<endl<<endl;
cout<<"\t\t\t\t\t\t\t\ta) <head>"<<endl;
cout<<"\t\t\t\t\t\t\t\tb) <body>"<<endl;
cout<<"\t\t\t\t\t\t\t\tc) <tittle>"<<endl;
cout<<"\t\t\t\t\t\t\t\td) None of the above"<<endl<<endl<<endl;
cout<<"\t\t\t\t\t\t\t\t chose key : ";
cin>>a;
if (a=='d' || a=='D'){aw<<i+1<<" : your ans is correct: "<<endl<<endl;marks++;}
	else {aw<<i+1<<" : your ans is incorrect \n\ncorrect ans is : (d)\n\n";	}
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
	
	
	
	
	
} // end body of function 
	
