/*matrix class which can handle integer matrices of different dimensions. Also overload the operator for addition and
multiplication of matrices. Use double pointers in your program to dynamically allocate memory for the matrices.*/

#include<iostream>
using namespace std;
class matrix {
  float ** m;
  int row, col;
  public:
    matrix() {}
  matrix(int r, int c);
  void input();
  void display();
  matrix operator + (matrix M);
  matrix operator * (matrix M);
};

matrix::matrix(int r, int c) {
  row = r;
  col = c;
  m = new float * [r];
  for (int i = 0; i < r; i++)
    m[i] = new float[col];
}
void matrix::input() {
  cout << "Enter matrix elements \n";
  for (int i = 0; i < row; i++) {
    for (int j = 0; j < col; j++) {
      int value;
      cin >> value;
      m[i][j] = value;
    }
  }
}

void matrix::display() {
  for (int i = 0; i < row; i++) {
    for (int j = 0; j < col; j++) {
      cout << m[i][j] << " ";
    }
    cout << "\n";
  }
}

matrix matrix::operator + (matrix M) {

  matrix mt(row, col);
  for (int i = 0; i < row; i++) {
    for (int j = 0; j < col; j++) {
      mt.m[i][j] = m[i][j] + M.m[i][j];
    }
  }
  return mt;
}

matrix matrix::operator * (matrix M) {
  matrix mt(row, M.col);

  for (int i = 0; i < row; i++) {
    for (int j = 0; j < M.col; j++) {
      mt.m[i][j] = 0;
      for (int k = 0; k < M.row; k++)
        mt.m[i][j] += m[i][k] * M.m[k][j];
    }
  }

  return mt;
}
int main() {

  int r1, c1, r2, c2, ch;
  cout << " Enter size of the first matrix (m x n) : ";
  cin >> r1 >> c1;
  matrix m1(r1, c1);
  m1.input();
  cout << " Enter size of the second matrix (m x n) : ";
  cin >> r2 >> c2;
  matrix m2(r2, c2);
  m2.input();
  cout << endl << endl;
  while (ch!=4) {
      cout << "1. Matrix addition \n2. Matrix multiplication \n3. Exit \n";
      cin >> ch;
        switch (ch) {
            case 1:{
                if (r1 == r2 && c1 == c2) {
                matrix m3(r1, c1);

                m3 = m1 + m2;
                cout << "Resultant Matrix after addition is:\n";
                m3.display();
                }
                else
                    cout << "Matrices should be of the same size for addition!" << endl;
            break;
            }
            case 2:{
                if (c1 == r2) {
                matrix m5(r2, c1);

                m5 = m1 * m2;
                cout << "Resultant Matrix after multiplication is:\n";
                m5.display();
            }
            else
                cout << " Column of first matrix must be equal to the row of second matrix " << endl;
                break;
            }
            case 3:{
                cout<<"Thank you";
                exit (0);
                break;
            }
        }
    }
    return 0;
}
