#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define fast_io ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);

// func to calculate determinant
double determinant(const vector<vector<double>>&mat)
{
     return mat[0][0] * (mat[1][1] * mat[2][2] - mat[1][2] * mat[2][1]) -
            mat[0][1] * (mat[1][0] * mat[2][2] - mat[1][2] * mat[2][0]) +
            mat[0][2] * (mat[1][0] * mat[2][1] - mat[1][1] * mat[2][0]);
}
// func to replace the col with B
vector<vector<double>>replaceCol(vector<vector<double>>newMat, vector<double>&col, int index)
{
    for(int i=0;i<3;i++)
    {
        newMat [i][index] = col[i];
    }
    return newMat;
}
int main()
{
    fast_io;

    vector<vector<double>>A = {
    {1, 1, 1},
    {0, 1, 3},
    {1, -2, 1}
    };

    // constants for vector B
    vector<double>B= {6,11,0};

    // calculating the det of A
    double detA= determinant(A);

    if(detA==0)
    {
        cout<<"It has no unique solution as detA=0"<<endl;
        return 0;
    }

    // calling the func for calculation
    double detX = determinant(replaceCol(A,B,0));
    double detY = determinant(replaceCol(A,B,1));
    double detZ = determinant(replaceCol(A,B,2));

    double x = detX / detA;
    double y = detY / detA;
    double z = detZ / detA;

    cout << "Solution:" << endl;
    cout << "x = " << x << endl;
    cout << "y = " << y << endl;
    cout << "z = " << z << endl;

    return 0;
}