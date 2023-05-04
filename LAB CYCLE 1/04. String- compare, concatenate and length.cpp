// progtram to perform operations such as compare, concatenate and length on String objec#include<iostream>
#include<cstring>
using namespace std;
class String {
  char * str;
  int length;
  public:
    String() {
      length = 0;
      str = new char[length+1];
    }
  String(const char * s) {
    length = strlen(s);
    str = new char[length + 1];
    strcpy(str, s);
  }
  void get_string() {
    cin >> str;
  }
  void display() {
    cout << str << endl;
  }
  void concat(String a, String b);
  void stlength();
  void compare(String s1, String s2);
};
void String::concat(String a, String b) {
  length = a.length + b.length;
  delete str;
  str = new char[length + 1];
  strcpy(str, a.str);
  strcat(str, b.str);
  cout << endl;
}
void String::stlength() {
  cout << strlen(str);
  cout << endl;
}
void String::compare(String s1, String s2) {
  int m, n;
  m = strlen(s1.str);
  n = strlen(s2.str);
  if (m <= n)
    cout << s1.str << " is smaller than " << s2.str << "\n";
  else
    cout << s2.str << " is smaller than " << s2.str << "\n";
}
int main() {
  int ch;
  char ch1;
  String Str1, Str2, Str3;
  cout << "Enter first string: ";
  Str1.get_string();
  cout << "Enter second string: ";
  Str2.get_string();
  while (ch!=5) {
      cout << "\nOperations on Strings:\n 1. String concatenation \n 2. String length \n 3. Comparison of strings\n 4. Exit";
      cout << "\nEnter choice:";
      cin >>ch;
      switch (ch) {
      case 1:{
        Str3.concat(Str1, Str2);
        cout << "After concatenation: ";
        Str3.display();
        cout << endl;
        break;}
      case 2:{
        cout << "\nLength of first string:";
        Str1.stlength();
        cout << "\nLength of second string:";
        Str2.stlength();
        cout << "\nLength of concatenated string:";
        Str3.stlength();
        cout << endl;
        break;}
      case 3:{
        Str3.compare(Str1, Str2);
        break;
      }
      case 4:{
          cout << "Thank you.";
          exit (0);
      }
    }
}
 return 0;
}
