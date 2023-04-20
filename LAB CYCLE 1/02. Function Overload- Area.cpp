//calculate the area of different shapes like Rectangle, Square etc (at least 5 shapes) using overloaded function area().

#include<iostream>
#include<cmath>
using namespace std;

int area(int side){                //square
	return (side*side);
}
float area(float r){                  //circle
	return 3.14*r*r;
}
float area(float a,float b,float c){        //triangle
	float s=(a+b+c)/2;
	return (sqrt(s*(s-a)*(s-b)*(s-c)));
}
int area(int length,int breadth){         //rectangle
	return (length*breadth);
}
float area(float radius,float height){       //cylinder
	return (2*3.14*radius*(radius+height));
}

int main(){
	float rad, height,a,b,c, radius;
	int side, breadth, length, ch;
	
	
	
	while (ch!=7){
		cout<<"\n\n~~~Choices~~~";
		cout<<"\n1. Circle";
		cout<<"\n2. Triangle";
		cout<<"\n3. Square";
		cout<<"\n4. Rectangle";
		cout<<"\n5. Cylinder";
		cout<<"\n6. Exit";
	
		cout<<"\n\nEnter your choice: ";
		cin>>ch;
		switch (ch){
			case 1:{
				cout<<"\nEnter radius of circle: ";
				cin>>rad;
				cout<<"\nArea of the circle= "<<area(rad);
				break;
			}
			case 2:{
				cout<<"\nEnter 3 sides of triangle: ";
				cin>>a>>b>>c;
				cout<<"\nArea of the triangle= "<<area(a,b,c);
				break;
			}
			case 3:{
				cout<<"\nEnter side of square: ";
				cin>>side;
				cout<<"\nArea of the square= "<<area(side);
				break;
			}
			case 4:{
				cout<<"\nEnter length and breadth of rectangle: ";
				cin>>length>>breadth;
				cout<<"\nArea of the rectangle= "<<area(length,breadth);
				break;
			}
			case 5:{
				cout<<"\nEnter the radius and height of cylinder: ";
				cin>>radius>>height;
				cout<<"\nArea of the cylinder= "<<area(radius,height);
				break;
			}
			case 6:{
				cout<<"\nThank you for using the program :)";
				exit(0);
				break;
			}
		}
	}
}
