#include<iostream>
#include<fstream>
using namespace std;
int main(){
	
	string line;
	ofstream out("student.txt ios::app");
	string name;
	int rollno;
	cout<<"\n Enter name :" ;
	cin>>name;
	cout<<"Roll No";
	cin>>rollno;
	out<<"\n Name"<<name<<" rollno "<<rollno;
	
	ifstream inp("student.txt");
	while(getline(inp,line)){
		cout<<line;
	}
	cout<<"File written successfully";
	
	return 0;
}