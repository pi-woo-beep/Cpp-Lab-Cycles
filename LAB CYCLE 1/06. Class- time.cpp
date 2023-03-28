//class TIME with members hours, minutes, seconds. Take input, add two time objects by passing objects to function and display result.

#include <iostream>
using namespace std;

class TIME{
	private:
		int hour, minute, second;
	public:
		void input(){
			cout<<"\nEnter hour(s): ";
			cin>>hour;
			cout<<"Enter minute(s): ";
			cin>>minute;
			cout<<"Enter second(s): ";
			cin>>second;
		}
		void add_time(TIME &,TIME &);
		void display(){
			cout<<"["<<hour<<":"<<minute<<":"<<second<<"]"<<endl;
		}
};


void TIME::add_time(TIME &t1,TIME &t2){
	second=t1.second+t2.second;
	minute=second/60;
	second%=60;
	minute=minute+t1.minute+t2.minute;
	hour=minute/60;
	minute%=60;
	hour=hour+t1.hour+t2.hour;
}
		
int main(){
	TIME t1,t2,t3;
	int ch,hour,minute,second;
	
	while (ch!=5){
		cout<<"\n\n1. Input time. \n2. Add 2 time. \n3. Display added time. \n4. Exit."<<endl;
		cout<<"\nEnter choice: ";
		cin>>ch;
		
		switch (ch){
			case 1:{
				cout<<"\nEnter first time: ";
				t1.input();
				cout<<"\nEnter second time: ";
				t2.input();
				cout<<"\nInput successfully done :)";
				break;
			}
			case 2:{
				t3.add_time(t1,t2);
				cout<<"\nAddition of time successfully done :)";
				break;
			}
			case 3:{
				cout<<"\nFirst time: ";
				t1.display();
				cout<<"\nSecond time: ";
				t2.display();
				cout<<"\nAdded time: ";
				t3.display();
				break;
			}
			case 4:{
				cout<<"\nThank you for using the program :)";
				exit (0);
				break;
			}
		}
	}
	return (0);
}
