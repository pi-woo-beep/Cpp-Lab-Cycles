/*  design a class representing complex numbers and
having the functionality of performing addition & multiplication of two complex
numbers using operator overloading (Use friend operator functions) */

#include <iostream>
using namespace std;

class complex{
	private:
		int real, imag;
	public:
		complex(){
		}
		complex(int a, int b){
			real=a;
			imag=b;
		}
		complex operator +(complex b){
			complex c;
			c.real = this->real + b.real;
			c.imag = this->imag + b.imag;
			return c;
		}
		complex operator *(complex b){
			complex c;
			c.real = this->real * b.real;
			c.imag = this->imag * b.imag;
			return c;
		}
		void display(){
			cout<<real<<"+"<<imag<<"i"<<endl;
		}
};

int main(){
	int a,b;
	cout<<"Enter 2 integers for the first complex number: "<<endl;
	cin>>a>>b;
	complex A(a,b);
	cout<<"Enter 2 integers for the second complex number: "<<endl;
	cin>>a>>b;
	complex B(a,b);
	complex C;
	C = A + B;
	cout<<"The resultant complex number of addition is: "; C.display();
	C = A * B;
	cout<<"The resultant complex number of multiplication is: "; C.display();
	return 0;
}
