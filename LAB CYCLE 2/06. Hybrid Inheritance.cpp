/*Write a C++ program to demonstrate the concept of Multiple and Multilevel
inheritance including constructors with parameters.*/

#include <iostream>
using namespace std;

class Student {
  protected:
    int roll_no;
  public:
    void in_rollno(int);
  void rollno();
};
void Student::in_rollno(int r) {
  roll_no = r;
}
void Student::rollno() {
  cout << "Roll number: " << roll_no;
  cout << endl;
}
class Test: virtual public Student {
  protected:
  float sub1;
  float sub2;
  float sub3;
  public: void get_marks(float s1, float s2, float s3) {
    sub1 = s1;
    sub2 = s2;
    sub3 = s3;
  }
  void marks() {
    cout << "Marks in subject 1: " << sub1 << endl;
    cout << "Marks in subject 2: " << sub2 << endl;
    cout << "Marks in subject 3: " << sub3 << endl;
  }
};
class Sports: virtual public Student {
  protected: float score;
  public: void get_score(float s) {
    score = s;
  }
  void put_score() {
    cout << "Marks in sports: " << score << endl;
  }
};
class Result: public Test, public Sports {
  float total_marks;
  public:
    void display();
};
void Result::display() {
  total_marks = sub1 + sub2 + sub3 + score;
  rollno();
  marks();
  put_score();
  cout << "Total marks (out of 400): " << total_marks;
  cout << endl;
}
int main() {
  int roll;
  float m1, m2, m3, sc;
    Result Stud;
    cout << "\nEnter the roll number of the Student: ";
    cin >> roll;
    cout << "\nEnter marks obtained in subject 1 (out of 100): ";
    cin >> m1;
    cout << "\nEnter marks obtained in subject 2 (out of 100): ";
    cin >> m2;
    cout << "\nEnter marks obtained in subject 3 (out of 100): ";
    cin >> m3;
    cout << "\nEnter score obtained in sports (out of 100): ";
    cin >> sc;
    cout << endl;
    Stud.in_rollno(roll);
    Stud.get_marks(m1, m2, m3);
    Stud.get_score(sc);
    Stud.display();
  return 0;
}
