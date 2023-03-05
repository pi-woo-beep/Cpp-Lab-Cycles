/*Write a C++ program to implement a class MATRIX with member functions such
as matrix_add, matrix_mult, matrix_transpose and matrix_trace..*/

#include<iostream>
using namespace std;

class matrix{
	private:
		int **p;
		int x,y;
	public:
		matrix(int x, int y){
			p=new int *[x];
			for (int i=0; i<x; i++){
				p[i]=new int [y];
			}
		}
		~matrix(){
			for (int i=0; i<x; i++){
				delete p[i];
			}
			delete p;
			cout<<"Memory has been deleted..";
		}
		
		void input(int i, int j, int value){
			p[i][j]=value;
		}
		
		int output(int i, int j){
			return p[i][j];
		}
		
		void matrix_add(matrix, matrix);
		
		void matrix_mult(matrix, matrix);
		
		void matrix_transpose();
		
		void matrix_trace();
};

void matrix::matrix_add(matrix a, matrix b){
	matrix result(x,y);
	for (int i=0; i<x; i++){
		for (int j=0; j<y; j++){
			result[i][j]=a[i][j]+b[i][j];
		}
	}
	cout<<"The resultant matrix is: "<<endl;
	for (int i=0; i<x; i++){
		for (int j=0; j<y; j++){
			cout<<result.output(i,j)<<" ";
		}
		cout<<"\n";
	}
}

void matrix::matrix_mult(matrix one, matrix two){
	int r1,r2,c1,c2;
	matrix result(r1,c2);
	for (int i=0; i<r1; i++){
		for (int j=0; j<c2; j++){
			result[i][j]=0;
			for (int k=0; k<c1; k++){
				result[i][j] += one[i][k] * two[k][j];
			}
		}
	}
	cout<<"The resultant matrix is: "<<endl;
	for (int i=0; i<x; i++){
		for (int j=0; j<y; j++){
			cout<<result.output(i,j)<<" ";
		}
		cout<<"\n";
	}
}

void matrix::matrix_transpose(){
	matrix a(x,y);
	for (int i=0; i<x; i++){
		for (int j=0; j<y; j++){
			a[i][j]=a[j][i];
		}
	}
	cout<<"The transpose matrix is: "<<endl;
	for (int i=0; i<x; i++){
		for (int j=0; j<y; j++){
			cout<<result.output(i,j)<<" ";
		}
		cout<<"\n";
	}
}

void matrix::matrix_trace(){
	int sum=0;
	int n;
	matrix d(n,n);
	
	for (int i=0; i<n; i++){
		sum += d[i][i];
	}
	cout<<"Trace of the matrix is: "<<sum<<endl;
}

int main(){
	int ch,m,n,value,r1,r2,c1,c2,x,y;
	
	cout<<"1. Add 2 matrices. \n2. Multiply 2 matrices. \n3. Transpose of a matrix. \n4. Trace of a matrix."<<endl;
	
	while (ch!=6){
		switch (ch){
			case 1:{
				cout<<"Enter the size of the square matrix (n): "<<endl;
				cin>>n;
				x=n;
				y=n;
				matrix result(x,y);
				matrix a(x,y);
				cout<<"Enter elements of the first matrix row by row: "<<endl;
				for (int i=0; i<x; i++){
					for (int j=0; j<y; j++){
						cin>>value;
						a.input(i,j,value);
					}
				}
				matrix b(x,y);
				cout<<"Enter elements of the second matrix row by row: "<<endl;
				for (int i=0; i<x; i++){
					for (int j=0; j<y; j++){
						cin>>value;
						b.input(i,j,value);
					}
				}
				result.matrix_add(a,b);
				break;
			}
			case 2:{
				cout<<"Enter size of first matrix (m x n): "<<endl;
				cin>>r1>>c1;
				matrix a(r1,c1);
				cout<<"Enter size of second matrix (previous columns must be same as rows here): "<<endl;
				cin>>r2>>c2;
				matrix b(r2,c2);
				while (c1!=r2){
					cout<<"Error..! Columns of first matrix is not equal to rows of second matrix."<<endl;
					cout<<"Enter size of first matrix (m x n): "<<endl;
					cin>>r1>>c1;
					cout<<"Enter size of second matrix (previous columns must be same as rows here): "<<endl;
					cin>>r2>>c2;
				}
				matrix result(r1,c2);
				cout<<"Enter elements of the first matrix row by row: "<<endl;
				for (int i=0; i<r1; i++){
					for (int j=0; j<c1; j++){
						cin>>value;
						a.input(i,j,value);
					}
				}
				cout<<"Enter elements of the second matrix row by row: "<<endl;
				for (int i=0; i<r2; i++){
					for (int j=0; j<c2; j++){
						cin>>value;
						b.input(i,j,value);
					}
				}
				result.matrix_mult(a,b);
				break;
			}
			case 3:{
			    cout<<"Enter the size of the matrix (m x n): "<<endl;
			    cin>>m>>n;
			    matrix a(m,n);
			    cout<<"Enter the elements row by row: "<<endl;
			    for (int i=0; i<m; i++){
			    	for (int j=0; j<n; j++){
			    		cin>>value;
			    		a.input(i,j,value);
					}
				}
				a.matrix_transpose();
				break;
			}
			case 4:{
				cout<<"Enter the size of the square matrix (n): "<<endl;
				cin>>n;
				matrix d(n,n);
				cout<<"Enter the elements of the matrix row by row: "<<endl;
				for (int i=0; i<n; i++){
					for (int j=0; j<n; j++){
						cin>>value;
						d.input(i,j,value);
					}
				}
				d.matrix_trace();
				break;
			}
			case 5:{
				cout<<"Exiting~ "<<endl;
				exit(0);
				break;
			}
		}
	}
	return (0);
}
