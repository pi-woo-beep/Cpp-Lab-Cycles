/*program to demonstrate the use of class templates.*/

#include <iostream>
using namespace std;

template <class numbers>
class num{
	private:
		numbers a, b;
	public:
		num(numbers n1, numbers n2){
			a=n1;
			b=n2;
		}
		void basic_calc(){
			cout<<"Numbers are: "<<a<<" , "<<b<<endl;
			cout<<a<<" + " << b << " = " << add() <<endl;
			cout<< a << " - " <<b << " = "<< subtract() << endl;
			cout<< a << " * " << b << " = " << multiply() << endl;
			cout<< a << " / " << b << " = " << divide() << endl;
		}
		numbers add(){
			return a+b;
		}
		numbers subtract(){
			return a-b;
		}
		numbers multiply(){
			return a*b;
		}
		numbers divide(){
			return a/b;
		}
};

int main(){
	int ch;
	
	while (ch!=5){
		cout<<"\n1. Integer \n2. Float \n3. Double \n4. Exit\n\n";
		cout<<"Enter choice: ";
		cin>> ch;
		
		switch (ch){
			case 1:{
				int a,b;
				cout<<"\nEnter integer 1: ";
				cin>>a;
				cout<<"\nEnter integer 2: ";
				cin>>b;
				num <int> icalc(a,b);
				icalc.basic_calc();
				break;
			}
			case 2:{
				float a,b;
				cout<<"\nEnter float 1: ";
				cin>>a;
				cout<<"\nEnter float 2: ";
				cin>>b;
				num <float> fcalc(a,b);
				fcalc.basic_calc();
				break;
			}
			case 3:{
				double a,b;
				cout<<"\nEnter double 1: ";
				cin>>a;
				cout<<"\nEnter double 2: ";
				cin>>b;
				num <double> dcalc(a,b);
				dcalc.basic_calc();
				break;
			}
			case 4:{
				cout<<"Thank you~";
				exit (0);
				break;
			}
		}
	}
	return 0;
}
