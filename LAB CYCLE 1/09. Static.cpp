/* design a class having static member function named showcount()- displaying the number of obj created of the class. */

#include <iostream>
using namespace std;

class object {
  int a;
  static int count;
  public:
    void setvalue() {
      a=++count;
    }
  void display() {
    cout << "object number:" << a << endl;
  }
  static void showcount() {
    cout << "Count of objects found:" << count << endl;
  }
};
int object::count;
int main() {
  int n;
  cout << "Enter how many objects want to be created: ";
  cin >> n;
  object Obj[n];
  for (int i = 0; i < n; i++) {
    Obj[i].setvalue();

  }
  object::showcount();
  for (int i = 0; i < n; i++) {
    Obj[i].display();
  }
  return 0;
}
