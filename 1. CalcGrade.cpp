// calculate the grades of a list of students with attributes (Name, Roll_no, Marks of 3 subjects) using class with member functions input(), calcGrade(), display().

#include <iostream>
using namespace std;

class student{
	private:
		char name[20];
		int roll_no;
		int mark[3];
	public:
		void input(void){
			cout<<"Enter the student's name: ";
			cin>>name;
			cout<<"Enter the roll number: ";
			cin>>roll_no;
			cout<<"Enter the 3 marks obtained (Out of 100): \n";
			cin>>mark[0]>>mark[1]>>mark[2];
		}
		void calcGrade(void);
		void display(void){
			cout<<"\nSTUDENT DETAILS"<<"\nName        :"<<name<<"\nRoll Number :"<<roll_no<<"\n";
		}
};

void student::calcGrade(void){
	float average;
	for (int i=0;i<=2;i++){
		average+=mark[i];
	}
	average/=3;
	if (average>90)
	cout<<"Grade = A";
	else if (average>80)
	cout<<"Grade = B";
	else
	cout<<"Grade = C";
}

int main(){
	student stu1;
	stu1.input();
	stu1.display();
	stu1.calcGrade();
}
