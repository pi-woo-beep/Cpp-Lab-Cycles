/*swap private data members of classes named as class_1,
class_2 using friend function.*/

#include <iostream>
using namespace std;

class class_2;
class class_1{
    private:
        int a;
    public:
        void input(){
            cout<<"Enter a number: ";
            cin>>a;
        }
        void display(){
            cout<<"Number is: "<<a<<endl;
        }
        friend void swap(class_1&,class_2&);
};

class class_2{
    private:
        int b;
    public:
        void input(){
                cout<<"Enter a number: ";
                cin>>b;
        }
        void display(){
            cout<<"Number is: "<<b<<endl;
        }
        friend void swap(class_1&,class_2&);
};

void swap(class_1&a,class_2&b){
    int temp;
    temp=a.a;
    a.a=b.b;
    b.b=temp;
}

int main(){
    class_1 c1;
    class_2 c2;
    c1.input();
    c2.input();
    cout<<"Numbers before swapping: \n";
    c1.display();
    c2.display();
    cout<<"Numbers after swapping: \n";
    swap(c1,c2);
    c1.display();
    c2.display();

    return 0;
}