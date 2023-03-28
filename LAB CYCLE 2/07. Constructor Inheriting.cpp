/*C++ program illustrating how the constructors are implemented and the
order in which they are called when the classes are inherited. Use three classes
named alpha, beta and gamma such that alpha and beta are base classes and
gamma is a derived class inheriting alpha & beta.*/

#include <iostream>
using namespace std;

class alpha{
	private:
		int x;
	public:
		alpha (int i){
			x=i;
			cout<<"Alpha has been constructed"<<endl;
		}
		void show_x(){
			cout<<"x is: "<<x<<endl;
		}
};

class beta{
	private:
		int b;
	public:
		beta (float j){
			b=j;
			cout<<"Beta has been constructed"<<endl;
		}
		void show_y(){
			cout<<"y is: "<<b<<endl;
		}
};

class gamma:public beta, public alpha{
	private:
		int m,n;
	public:
		gamma (int a, float b, int c, int d): alpha (a), beta (b){
			m=c;
			n=d;
			cout<<"Gamma has been constructed"<<endl;
		}
		void show_m_n(){
			cout<<"m is "<<m<<" and n is "<<n<<endl;
		}
};

int main(){
	gamma g(1,2.3,4,5);
	g.show_x();
	g.show_y();
	g.show_m_n();
	return 0;
}
