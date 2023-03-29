/* program to demonstrate the use of exception handling*/

#include <iostream>
using namespace std;

double zero_division(float x, float y){
	if (y==0){
		throw "Division by zero..";
	}
	else{
		return x/y;
	}
}

int main(){
	float x,y;
	
	try{
		int *arr= new int [100000000000000000000];
	}
	catch (exception &e){
		cout<<"Exeption occurred..!! " << e.what()<<endl;
	}
	
	try {
		throw 100;
	}
	catch (int e){
		cout<<"Can't accept "<<e<<endl;
	}
	
	cout<<"\nEnter a number x as numerator to divide: ";
	cin>>x;
	cout<<"\nEnter a number y as denominator to divide: ";
	cin>>y;
	
	try {
		double c = zero_division(x,y);
		cout << c;
	}
	catch (const char * message){
		cout<< message;
	}
	
	return 0;
}
