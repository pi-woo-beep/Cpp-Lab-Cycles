/*demonstrate the use of pure virtual functions and
abstract base classes*/

#include <iostream>
using namespace std;

class base{
	protected:
		int n1, n2, sum;
	public:
		virtual void result()=0; 										//pure virtual function
};

class derived : public base{
	public:
		void input(){													//redefined function
			cout<<"\nEnter number 1: ";
			cin>>n1;
			cout<<"\nEnter number 2: ";
			cin >> n2;
		}
		void result(){
			sum = n1 + n2;
			cout<<"\n"<<n1 << " + " << n2 << " = "<< sum << endl;
		}
};

int main(){
	derived object;
	cout<<"Sum of 2 integers \n\n";
	object.input();
	object.result();
	return 0;
}
