/*overload operators like *, <<, >> using friend
function. The following overloaded operators should work for a class vector.*/

#include <iostream>
#include <string>
using namespace std;

class vector{
	private:
		int i,j,k;
	public:
		vector(){
			i=0;
			j=0;
			k=0;
		}
		vector (int a, int b, int c){
			i=a;
			j=b;
			k=c;
		}
		friend int operator * (vector &, vector &);
		friend ostream &operator << (ostream &, vector &);
		friend istream &operator >> (istream &, vector &);
};

int operator * (vector &a, vector &b){
	return ( a.i*b.i + a.j*b.j + a.k*b.k );
}

ostream &operator << (ostream &output, vector &a){
	return output << "(" << a.i << ")i + (" << a.j <<")j + (" << a.k <<")k";
}

istream &operator >> (istream &input, vector &a){
	cout<<"Enter i: ";
	cin>>a.i;
	cout<<"Enter j: ";
	cin>>a.j;
	cout<<"Enter k: ";
	cin>>a.k;
	return input;
}

int main(){
	int ch;
	vector a, b;
	bool assigned = false;
	
	while (ch!=5){
		cout<<"\n\n1. Enter values for 2 vectors. \n2. Display the vectors. \n3. Find dot product of the vectors. \n4. Exit\n";
		cout<<"\nEnter choice: ";
		cin>>ch;
		
		switch (ch){
			case 1:{
				cout<<"Vector 1: \n";
				cin>>a;
				cout<<"Vector 2: \n";
				cin>>b;
				assigned = true;
				break;
			}
			case 2:{
				if (assigned){
					cout<<"Vector 1 is: "<<a<<endl;
					cout<<"Vector 2 is: "<<b<<endl;
				}
				else{
					cout<<"Please enter values for the vectors..";
				}
				break;
			}
			case 3:{
				if (assigned){
					cout<<"The dot product is: "<<a*b<<endl;
				}
				else{
					cout<<"Please enter values for the vectors..";
				}
				break;
			}
			case 4:{
				cout<<"Thank you, Bye bye~";
				exit (0);
				break;
			}
		}
	}
	return 0;
}
