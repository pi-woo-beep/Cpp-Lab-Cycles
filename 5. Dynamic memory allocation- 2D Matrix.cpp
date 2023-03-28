//program to demonstrate the order of execution of constructors & destructors as well as the dynamic memory allocation of a 2-D matrix.

#include <iostream>
using namespace std;

class matrix{
	private:
		int **p;
		int d1,d2;
	public:
		matrix(int x,int y);
		~matrix();
		void input(int i, int j, int value){
			p[i][j]=+value;
		}
		int output(int i, int j){
			return p[i][j];
		}
};

matrix::matrix(int x, int y){
	d1=x;
	d2=y;
	p=new int *[d1];
	for (int i=0; i<d1; i++){
		p[i]=new int [d2];
	}
}


	matrix::~matrix(){
		for (int i=0; i<d1; i++){
			delete p[i];
		}
		delete p;
		cout<<"Allocated memory has been deleted :)";
	}
	
int main(){
	int m,n;
	cout<<"Enter size of matrix (m x n): "<<endl;
	cin>>m>>n;
	matrix a(m,n);
	
	cout<<"Enter the elements of the matrix row by row: ";
	int value;
	for (int i=0;i<m;i++){
		for (int j=0; j<n; j++){
			cin>>value;
			a.input(i,j,value);
		}
	}
	
	cout<<"The entered matrix is: "<<"\n";
	for (int i=0; i<m; i++){
		for (int j=0; j<n; j++){
			cout<<a.output(i,j)<<" ";
		}
		cout<<"\n";
	}
	return (0);
}
