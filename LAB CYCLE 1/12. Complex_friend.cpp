/*design a class complex to represent complex numbers. The
complex class should use an external function (use it as a friend function) to
add two complex numbers. The function should return an object of type
complex representing the sum of two complex numbers.*/

#include <iostream>
using namespace std;

class comp{
    private:
        int real, imag;
    public:
        comp (int a, int b){
            real=a;
            imag=b;
        }
        friend comp sum(comp, comp);
        void display(){
            cout<<real<<"+"<<imag<<"i"<<endl;
        }
};

comp sum(comp a, comp b){
    int x,y;
    comp C(x,y);
    C.real=a.real+b.real;
    C.imag=a.imag+b.imag;
    return C;
}

int main(){
    int real,imag;
    cout<<"Enter real and imaginary parts for the first complex number: ";
    cin>>real>>imag;
    comp A(real,imag);
    cout<<"\nFirst complex number: ";
    A.display();

    cout<<"Enter real and imaginary parts for the second complex number: ";
    cin>>real>>imag;
    comp B(real,imag);
    cout<<"\nSecond complex number: ";
    B.display();
    
    int a,b;
    comp C(a,b);
    C=sum(A,B);
    cout<<"Sum of the 2 complex numbers = ";
    C.display();

    return 0;
}
