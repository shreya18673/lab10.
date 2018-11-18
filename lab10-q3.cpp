#include<iostream>
using namespace std;

//Declare a class
class Rectangle{
	public:
	int length;
	int breadth;
	
//Write a member function for area
	int area(){
		return length*breadth;
	}
	
//Write a member function for perimeter
	int perimeter(){
		return 2*(length+breadth);
	}
	
};

//Main function
int main(){
	//Declare objects of class
	Rectangle rect1;
	Rectangle rect2;
	int ar1;
	int ar2;
	int prmtr1;
	int prmtr2;
	
	//Ask the user for inputs of length and breadths for the two rectangles
	cout<<"Enter the length of the rectangle 1 in centimeters."<<endl;
	cin>>rect1.length;
	
	cout<<"Enter the breadth of the rectangle 1 in centimeters."<<endl;
	cin>>rect1.breadth;
	
	ar1=rect1.area();
	prmtr1=rect1.perimeter();
	
	cout<<"Enter the length of rectangle 2 in centimeters."<<endl;
	cin>>rect2.length;
	
	cout<<"Enter the breadth of rectangle 2 in centimeters."<<endl;
	cin>>rect2.breadth;
	
	ar2=rect2.area();
	prmtr2=rect2.perimeter();
	
	//Compare the areas of the two rectangle
	if(ar2<ar1){
		cout<<"Area of rectangle 1 is greater than area of rectangle 2. -_-"<<endl;
	
	}
	else if(ar2>ar1){
		cout<<"Area of rectangle 2 is more than area of rectangle 1."<<endl;
	}
	else if(ar2==ar1){
		cout<<"Area of both the rectangles is equal."<<endl;
	}
	
	//Compare the perimeters of the two rectangles
	if(prmtr1<prmtr2){
		cout<<"Perimeter of rectangle 2 is greater than perimeter of rectangle 1."<<endl;
	}
	else if(prmtr1>prmtr2){
		cout<<"Perimeter of rectangle 1 is greater than perimeter of rectangle 2"<<endl;
	}
	
	else if(prmtr1==prmtr2){
		cout<<"Perimeters of both the rectangles is equal."<<endl;
	}
return 0;
	
	
}
