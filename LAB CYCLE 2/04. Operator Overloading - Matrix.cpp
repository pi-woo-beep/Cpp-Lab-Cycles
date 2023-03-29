/*matrix class which can handle integer matrices of different dimensions. Also overload the operator for addition and
multiplication of matrices. Use double pointers in your program to dynamically allocate memory for the matrices.*/

#include <iostream>
using namespace std;

class matrix{
	private:
		int r, c, **p;
	public:
		matrix(){
		}
		matrix (int r, int c){
			p = new int *[r];
			for (int i=0; i<r; i++){
				p[i] = new int [c];
			}
		}
		void input(){
			int value;
			cout<<"\nEnter number of rows and columns of matrix: "<<endl;
			cin>>r>>c;
			matrix a(r,c);
			cout<<"Enter elements row by row: ";
			for (int i=0; i<r; i++){
				for (int j=0; j<c; j++){
					cin>>value;
					a.p[i][j]=value;
				}
			}
		}
		void output(){
			for (int i=0; i<r; i++){
				cout <<" ";
				for (int j=0; j<c; j++){
					cout<<p[i][j]<<"\t";
				}
				cout<<"\n";
			}
		}
		
		void operator + (const matrix &a){
			if ( r==a.r && c==a.c ){
				matrix b(r,c);
				for (int i=0; i<r; i++){
					for (int j=0; j<c; j++){
						b.p[i][j] = p[i][j] + a.p[i][j];
					}
				}
				b.output();
			}else{
			cout<<"Matrices have to be of the same dimensions..";
			}
		}
		
		void operator * (const matrix &a){
			if (c==a.r){
				matrix b(r,a.c);
				for (int i=0; i<r; i++){
					for (int j=0; j<a.c; j++){
						b.p[i][j] = 0;
						for  (int k=0; k<c; k++){
							b.p[i][j] += p[i][j] * a.p[i][j];
						}
					}
				}
				b.output();
			}
			else{
				cout<<"The column of the first matrix must be the same as the row of the seocnd matrix..";
			}
		}
};

int main(){
	int r,c,ch;
	bool assigned = false;
	matrix m1, m2;
	
	while (ch!=6){
		cout<<"\n\n1. Enter elements of 2 matrices \n2. Display matrices \n3. Add matrices \n4. Multiply matrices \n5. Exit\n\n";
		cout<<"Enter choice: ";
		cin>>ch;
		
		switch (ch){
			case 1:{
				cout<<"\nMatrix 1: \n";
				m1.input();
				cout<<"\nMatrix 2: \n";
				m2.input();
				assigned = true;
				break;
			}
			case 2:{
				if (assigned){
					cout<<"\nMatrix 1: \n";
					m1.output();
					cout<<"\nMatrix 2: \n";
					m2.output();
				}
				else{
					cout<<"\nPlease enter matrices (Choice 1).."<<endl;
				}
				break;
			}
			case 3:{
				if (assigned){
					cout<<"Resultant matrix of addition is: \n"; m1 + m2;
				}
				else{
					cout<<"\nPlease enter matrices (Choice 1).."<<endl;
				}
				break;
			}
			case 4:{
				if (assigned){
					cout<<"REsultant matrix of multiplication is: \n"; m1 * m2;
				}
				else{
					cout<<"\nPlease enter matrices (Choice 1).."<<endl;
				}
				break;
			}
			case 5:{
				cout<<"Thank you for using the program :)";
				exit (0);
				break;
			}
		}
	}
	return 0;
}
