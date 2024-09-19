//Q.No. 3
//Write a C++ program to create a class Student with data members Roll_No, Student_Name, Class. Write
//member functions to accept and display Student information also display count of students. (Use Static
//data member and Static member function)

#include<iostream>

using namespace std;

class Student
{
	private:
		
		int Roll_no;
		string Student_name;
		int class_no;
		
		static int Student_cnt;
		
	public:
		
		Student()
		{
			Roll_no = 0;
			Student_name = "unknown";
			class_no =0;
		}
		
		void accept()
		{
			Student_cnt++;
			
			cout<<"Enter Name : ";
			cin>>Student_name;
			
			cout<<"Enter Roll Number : ";
			cin>>Roll_no;
			
			cout<<"Enter Class : ";
			cin>>class_no;
		}
		
		void display()
		{
			cout<<Student_name<<"\t"<<Roll_no<<"\t"<<class_no <<" th"<<endl;			
		}
		
		static void show()
		{
			cout<<"\nTotal Student : "<<Student_cnt<<endl;
		}
		
};

int Student::Student_cnt=0;


int main()
{
	int n;
	
	cout<<"Enter number of student : ";
	cin>>n;
	
	Student ob[n];
	
	for(int i =0;i<n;i++)
	{
		ob[i].accept();
	}
	
	cout<<"Name"<<"\t"<<"\nRoll No"<<"\t"<<"Class"<<endl;
	
	for(int i =0;i<n;i++)
	{
		ob[i].display();
	}
	
	Student::show();

	return 0;
}