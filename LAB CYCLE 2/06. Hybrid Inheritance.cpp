/*Write a C++ program to demonstrate the concept of Multiple and Multilevel
inheritance including constructors with parameters.*/

#include <iostream>
using namespace std;

class student{
	protected:
		int roll_no;
	public:
		void get_roll_no (int a){
			cout<<"Enter roll number: ";
			cin>>a;
			roll_no=a;
		}
		void put_roll_no(){
			cout<<"Roll number = "<<roll_no<<endl;
		}
};

class test: public student{
	protected:
		float sub1, sub2;
	public:
		void get_marks (float a, float b){
			cout<<"Enter 2 marks (out of 100): "<<endl;
			cin>>a>>b;
			sub1=a;
			sub2=b;
		}
		void put_marks(){
			cout<<"Subject 1   = "<<sub1<<endl;
			cout<<"Subject 2   = "<<sub2<<endl;
		}
};

class sports{
	protected:
		float score;
	public:
		void get_score (float s){
			cout<<"Enter score: ";
			cin>>s;
			score=s;
		}
		void put_score(){
			cout<<"Score = "<<score<<endl;
		}
};

class result:public test, public sports{
	private:
		float total;
	public:
		void display(){
			float total = sub1 + sub2 + score;
			put_roll_no();
			put_marks();
			cout<<"Total marks = "<<total<<endl;
		}
};

int main(){
	result r;
	int n;
	float a,b;
	r.get_roll_no(n);
	r.get_marks(a,b);
	r.get_score(a);
	r.display();
}
