/* design a class having static member function named showcount()- displaying the number of obj created of the class. */

#include <iostream>
using namespace std;

class obj{
    private:
        int obj_no;
        static int count;
    public:
        obj(){
            obj_no=++count;
        }
        static void showcount(){
            cout<<"Count: "<<count<<"\n";
        }
};

int obj::count;
int main(){
    obj a, b;
    obj::showcount();

    obj c, d;
    obj::showcount();

    obj e;
    obj::showcount();

    return 0;
}