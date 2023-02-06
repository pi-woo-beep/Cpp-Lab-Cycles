/* Using classes to perform bank transaction for n customers (cust_name, acc_no, acc_type, balance). The program should be menu driven
and it should have the following menus like adding new account, withdraw (keep a min balance of 500), deposit, balance enquiry and account statement
(cust_name, acc_no, acc_type, balance). */

#include <iostream>
using namespace std;

class bank{
	private:
		string cust_name,acc_type;
		int acc_no=1;
		float bal;
	public:
		void open_account();
		void withdraw();
		void deposit();
		void balance();
		void acc_statement();
};

void bank::open_account(){
	cout<<"\nEnter full name: ";
	cin>>cust_name;
	cout<<"\nEnter account type S(savings) or C(current): ";
	cin>>acc_type;
	cout<<"\nEnter the amount to be deposited (minimum 500 Rs.): ";
	cin>>bal;
	if (bal<500){
		cout<<"Please enter atleast 500 Rs.";
		cout<<"\nEnter the amount to be deposited (minimum 500 Rs.): ";
		cin>>bal;
	}
	cout<<"\nAccount successfully created :)"<<endl;
}

void bank::deposit(){
	float amount;
	cout<<"\nEnter the amount to be deposited: ";
	cin>>amount;
	bal+=amount;
	cout<<"\nDeposit successfully done :)";
}

void bank::withdraw(){
	float amount;
	cout<<"\nEnter amount to be witdrawn: ";
	cin>>amount;
	if (amount>bal-500){
		cout<<"\nAmount cannot be witdrawn :(";
	}
	else{
		bal-=amount;
		cout<<"\n"<<amount<<" successfully withdrawn :)";
		cout<<"\nCurrent balance is: "<<bal;
	}
}

void bank::balance(){
	cout<<"\nCurrent balance is: "<<bal;
}

void bank::acc_statement(){
	cout<<"Account number : "<<acc_no<<endl;
	cout<<"Name           : "<<cust_name<<endl;
	cout<<"Account type   : "<<acc_type<<endl;
	cout<<"Balance        : "<<bal<<endl;
}

int main(){
	int ch;
	bank customer;
	
	while(ch!=7){
		cout<<"\n\n1. Open an account. \n2. Deposit. \n3. Withdraw. \n4. Check Balance. \n5. Account Statement. \n6. Exit."<<endl<<endl;
		
		cout<<"Enter choice: ";
		cin>>ch;
		
		switch(ch){
			case 1:{
				customer.open_account();
				break;
			}
			case 2:{
				customer.deposit();
				break;
			}
			case 3:{
				customer.withdraw();
				break;
			}
			case 4:{
				customer.balance();
				break;
			}
			case 5:{
				customer.acc_statement();
				break;
			}
			case 6:{
				cout<<"Thank you :)";
				exit(0);
				break;
			}
		}
	}
	return(0);
}
