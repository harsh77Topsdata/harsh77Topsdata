#include<iostream>
using namespace std;

class Matrix{
    public:
      Matrix() {}
    Matrix(Matrix&x):a(x.a) {}
    Matrix(vector<<vector<int>>&v):a(v) {}
    Matrix operator+(const Matrix&);
    vector<vector<int>>a;
    void display()
	{
        for(int i=0;i<a.size();i++)
		{
            for(int j=0;j<a[i].size();j++)
			{
                cout<<a[i][j]<< " ";
            }    
            cout<<endl;
        }
    }
};
Matrix Matrix::operator+(Matrix& m)
{
    vector<vector<int>>vv=a;
    for(int i=0;i<vv.size();i++)
	{
        for(int j=0;j<vv[0].size();j++)
		{
            vv[i][j]+=m.a[i][j];
        }
    }
    return Matrix(vv);
}
int main(){
   vector<vector<int>>mat1 ={{5,8},{9,6},{7,9}};
   vector<vector<int>>mat2 ={{8,3},{4,7},{6,3}};
   int r=mat1.size();
   int c=mat1[0].size();
   Matrix m1(mat1),m2(mat2),res;
   res=m1+m2;
   res.display();
}
