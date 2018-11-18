//point.cpp



#include <iostream>

using namespace std;



// ********************************************************************

//  Declaration of class Point

// ********************************************************************



// class Point represents a two-dimensional point

class Point

{

public:

  // default class constructor (with no arguments):

  Point(); 



  // class constructor that sets the coordinates x, y to the values xval,

  // yval:

  Point(int xval, int yval);



  // member function for moving a point by dx, dy:

  void Move(int dx, int dy);



  // member functions for getting values of x, y:

  int Get_X() const;

  int Get_Y() const;



  // member functions for setting x, y to xval, yval respectively  

  void Set_X(int xval);

  void Set_Y(int yval);



//Lab 7 exercise 4.1. Add declaration of member function Print here:

  void Print(void);

  

// private data members x, y represent coordinates of the point:

private:

  int X;

  int Y;

};  





// ********************************************************************

//  Methods for class Point

// ********************************************************************



// class constructor sets X, Y to zero when no values are specified:

Point::Point()

{

  X = 0;

  Y = 0;

}



// class constructor sets X, Y to given values xval, yval:

Point::Point(int xval, int yval)

{

  X = xval;

  Y = yval;

}



// member function Move: increases the x coordinate by dx and the y

// coordinate by dy.

void Point::Move(int dx, int dy)

{

  X += dx;

  Y += dy;

}



// Get_X returns the value of the X coordinate

int Point::Get_X() const

{

  return X;

}



// Get_Y returns the value of the Y coordinate

int Point::Get_Y() const

{

  return Y;

}



// Set_X sets the value of X coordinate to xval

void Point::Set_X(int xval)

{

  X = xval;

} 



// Set_Y sets the value of Y coordinate to yval

void Point::Set_Y(int yval)

{

  Y = yval;

} 

    



//Lab 7 exercise 4.1. Add definition of member function print:

void Point::Print()

{

    cout<<"("<<X<<","<<Y<<")"<<endl;

}



// ********************************************************************

//  Declaration of class Rectangle

// ********************************************************************

class Rectangle{

	

//Lab 7 exercise 4.2, 4.3: Add class Rectangle declaration HERE: 

    private :

    	Point p1,p2,p3,p4;

    public :

    	//default class constructor with no arguements

    	Rectangle();

    	

    	//class constructor that sets the points to the values p1, p2, p3, p4

    	Rectangle(Point m, Point n);



// ********************************************************************

//  Methods for class Rectangle

// ********************************************************************

        

//Lab 7 exercise 4.2, 4.3. Add class Rectangle methods HERE: 



        void Coordinates(){

    		p1.Print();

    		p2.Print();

    		p3.Print();

    		p4.Print();

    	}

   	//member function to find the side lengths of the rectangle

    	double side1();
		double side2();

    	

    public :

        double area();

};



	Rectangle::Rectangle(){
		p1=Point(0,0);
	
		p2=Point(1,0);
	
		p3=Point(1,1);
	
		p4=Point(0,1);

	}



Rectangle::Rectangle(Point m, Point n)

{

	p1=m;

	p2=Point(n.Get_X(),m.Get_Y());

	p3=n;

	p4=Point(m.Get_X(),n.Get_Y());

}

double Rectangle::side1(){

    return (p2.Get_X()-p1.Get_X());

}

double Rectangle::side2(){

    return (p4.Get_Y()-p1.Get_Y());

}

double Rectangle::area(){

    return (side1()*side2());

}



// ********************************************************************

//  main() function for testing classes Point and Rectangle

// ********************************************************************



// Testing classes Point and Rectangle

int main(){

    	cout<<"Verification of Point class and its functions"<<endl<<endl;

   	 //declaring the variables and objects

	int x, y;

	Point p1,p2;

	

	//taking input of the x and y coordinates

	cout<<"Enter X-coordinate of the point : ";
	cin>>x;

	cout<<"Enter Y-coordinate of the point : ";
	cin>>y;

	

	//assigning the x and y coordinates to the point p1 object

	p1.Set_X(x);
	p1.Set_Y(y);



//Lab 7 exercise 4.1. Test member function print on points p1, p2:

	//printing the point

	cout<<"The default point is : ";
	p2.Print();

	cout<<"The original point is : ";
	p1.Print();

//moving the point

	int dx, dy;

	cout<<"Enter the shift in x coordinate : ";
	cin>>dx;

	cout<<"Enter the shift in y coordinate : ";
	cin>>dy;

	p1.Move(dx,dy);


	//printing the shifted point

	cout<<"The shifted point is : ";
	p1.Print();

	//Getting the x and y coordinates of the point

	cout<<"The x-coordinate of the point is : "<<p1.Get_X()<<endl;

	cout<<"The y-coordinate of the point is : "<<p1.Get_Y()<<endl<<endl;

	

//Lab 7 Exercises 4.2, 4.3. Testing of the class Rectangle goes here:  

    	cout<<"Verification of Rectangle class and its functions"<<endl<<endl;

    	//Rectangle1//default//

	Rectangle rect1;

	

	//Rectangle2//

	double x1,x2,y1,y2;

	cout<<"Enter X coordinate of bottom left corner of the rectangle. "<<endl;
	cin>>x1;

	cout<<"Enter Y coordinate of bottom left corner of the rectangle."<<endl;
	cin>>y1;

	cout<<"Enter X coordinate of top right corner of the rectangle."<<endl;
	cin>>x2;

	cout<<"Enter Y coordinate of top right corner of the rectangle."<<endl;
	cin>>y2;

	

	//declaring its corners points

	Point m, n;

	//assigning X and Y coordinates to the corners

	m.Set_X(x1);
	m.Set_Y(y1);
	n.Set_X(x2);
	n.Set_Y(y2);

	//declaring the rectangle with its corners as arguements
	Rectangle rect2(m,n);

		
	//printing its corners 

	cout<<"The four corners of the default rectangle are : "<<endl;
	rect1.Coordinates();
	
	cout<<"The four corners of the given rectangle are : "<<endl;
	rect2.Coordinates();

	

	//printing its area

	cout<<"The area of default rectangle : "<<rect1.area()<<endl;
	cout<<"The area of given rectangle : "<<rect2.area()<<endl;

	return 0;

}
