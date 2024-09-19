/*
Q.No. 2
Write a program to print the area of two rectangles having sides (4,5) and (5,8) respectively by creating a
class named &#39;Rectangle&#39; with a function named &#39;Area&#39; which returns the area. Length
*/

#include<iostream>
using namespace std;

class Rectangle{
	int l,b;
	public:
	int area(int l, int b){
		cout<<"\nArea of rectangle is :"<<l*b;
	}
	
	
	
};

int main()
{
	Rectangle obj1,obj2;
	obj1.area(4,5);
	obj2.area(5,8);
	
	
}