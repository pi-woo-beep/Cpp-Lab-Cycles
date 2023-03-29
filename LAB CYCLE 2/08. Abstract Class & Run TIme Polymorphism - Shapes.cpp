/*program to define classes Shapes, Circle, Square, Ellipse and
Rectangle with member functions to get the values for finding corresponding
areas and print the same. Utilize the concept of Abstract Class and Runtime
polymorphism to solve the problem.*/

#include <iostream>
using namespace std;
const double pi=3.14;

class shapes{
	public:
		virtual void Area()=0;
};

class circle: public shapes{
	private:
		double radius , area;
	public:
		void Area(){
			cout<<"\nEnter radius of the circle: ";
			cin>>radius;
			area = pi * radius * radius;
			cout<<"\nThe area of the circle is: "<<area<<endl;
		}
};

class square : public shapes{
	private:
		float side , area ;
	public:
		void Area(){
			cout<<"\nEnter side of the sqaure: ";
			cin>>side;
			area = side * side;
			cout<<"\nThe area of the square is: "<< area << endl;
		}
};

class ellipse : public shapes{
	private:
		float x, y, area ;
	public:
		void Area (){
			cout<<"\nEnter value of x axis: ";
			cin >> x;
			cout<<"\nEnter value of y axis: ";
			cin >> y;
			area = pi * x * y;
			cout<<"\nThe area of the ellipse is: "<< area << endl;
		}
};

class rectangle : public shapes{
	private:
		float length , breadth, area;
	public:
		void Area (){
			cout<<"\nEnter length of the rectangle: ";
			cin >> length;
			cout<<"\nEnter breadth of the rectangle: ";
			cin >> breadth;
			area = length * breadth;
			cout<<"\nThe area of the rectangle is: " << area <<endl;
		}
};

int main(){
	int ch;
	circle c;
	square s;
	ellipse e;
	rectangle r;
	
	while (ch!=6){
		cout<<"\n1. Area of a Circle \n2. Area of a Square \n3. Area of an Ellipse \n4. Area of a Rectangle \n5. Exit\n\n";
		cout<<"Enter choice: ";
		cin>>ch;
		
		switch (ch){
			case 1:{
				c.Area();
				break;
			}
			case 2:{
				s.Area();
				break;
			}
			case 3:{
				e.Area();
				break;
			}
			case 4:{
				r.Area();
				break;
			}
			case 5:{
				cout<<"\nThank you, Bye bye~~" << endl;
				exit (0);
				break;
			}
		}
	}
	return 0;
}
