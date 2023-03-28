/*overload ==, !=, <, <=, > and >= operators as
member operator functions for a vector object.*/

#include <iostream>
#include <cmath>
using namespace std;

class vector{
	private:
		int i, j, k;
		double mag;
	public:
		vector(){
			i=0;
			j=0;
			k=0;
			mag=0;
		}
		vector (int a, int b, int c){
			i = a;
			j = b;
			k = c;
			mag = sqrt ( i*i + j*j + k*k );
		}
		bool operator == (vector A){
			return i==A.i && j==A.j && k==A.k;
		}
		bool operator != (vector A){
			return i!=A.i || j!=A.j || k!=A.k;
		}
		bool operator < (vector A){
			return mag < A.mag;
		}
		bool operator <= (vector A){
			return mag <= A.mag;
		}
		bool operator > (vector A){
			return mag > A.mag;
		}
		bool operator >= (vector A){
			return mag >= A.mag;
		}
		void display(){
			cout<<i<<"i + "<<j<<"j + "<<k<<"k"<<endl;
		}
};

int main(){
	int ch;
	vector V[2];
	
	for (int i=0; i<2; i++){
		int a, b, c;
		cout<<"Enter i for vector "<<i+1<<" : ";
		cin>>a;
		cout<<"Enter j for vector "<<i+1<<" : ";
		cin>>b;
		cout<<"Enter k for vector "<<i+1<<" : ";
		cin>>c;
		V[i] = vector(a,b,c);
	}
	vector V0, V1;
	while (ch!=8){
		cout<<"\n\n\n1. Check == \n2. Check != \n3. Check < \n4. Check <= \n5. Check > \n6. Check >= \n7. Exit \n\n";
		cout<<"Enter choice: ";
		cin>>ch;
		
		switch (ch){
			case 1:{
				cout<<"Is V1 == V2..? "<< (V0==V1) <<endl;
				break;
			}
			case 2:{
				cout<<"Is V1 != V2..? "<< (V0!=V1) <<endl;
				break;
			}
			case 3:{
				cout<<"Is magintude of V1 < magintude of V2..? "<< (V0<V1) <<endl;
				break;
			}
			case 4:{
				cout<<"Is magintude of V1 <= magintude of V2..? "<< (V0<=V1) <<endl;
				break;
			}
			case 5:{
				cout<<"Is magintude of V1 > magintude of V2..? "<< (V0>V1) <<endl;
				break;
			}
			case 6:{
				cout<<"Is magintude of V1 >= magintude of V2..? "<< (V0>=V1) <<endl;
				break;
			}
			case 7:{
				cout<<"Exiting :0";
				exit (0);
				break;
			}
		}
	}
	return 0;
}
