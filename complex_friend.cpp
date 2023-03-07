/*design a class complex to represent complex numbers. The
complex class should use an external function (use it as a friend function) to
add two complex numbers. The function should return an object of type
complex representing the sum of two complex numbers.*/

#include <iostream>
using namespace std;

class complex{
    private:
        int real, imag;
    public:
        complex (int a, int b){
            real=a;
            imag=b;
        }
        friend complex sum(complex, complex);
        void display(){
            cout<<"Sum= "<<real<<"+"<<imag<<"i"<<endl;
        }
};

complex sum(complex a, complex b){
    complex c;
    c.real=a.real+b.real;
    c.imag=a.imag+b.imag;
    return c;
}

int main(){
    int real,imag;
    cout<<"Enter 2 integers for the first complex number: ";
    cin>>real>>imag;
    complex A(real,imag);

    cout<<"Enter 2 integers for the second complex number: ";
    cin>>real>>imag;
    complex B(real,imag);

    complex c;
    c=sum(A,B);
    c.display();

    return 0;
}