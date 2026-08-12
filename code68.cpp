/*WRITE A PROGRAM TO DISPLAY TRANSPOSE OF MATRIX ENTERED BY THE USER*/

#include <iostream>
using namespace std;
int main()
{
    int r1,c1;

    cout<<"Enter the row 1 and column 1: ";
    cin>>r1>>c1;

    int mat1[r1][c1];

    cout<<"Enter the elements of mat1: "<<endl;

    for(int i=0;i<r1;i++){
        for(int j=0;j<c1;j++){
            cin>>mat1[i][j];
        }
    }

    int mat2[c1][r1]={};
    for(int i=0;i<c1;i++){
        for(int j=0;j<r1;j++){
            mat2[i][j]=mat1[j][i];
        }
    }

    cout<<"Transpose matrix is: "<<endl;

    for(int i=0;i<c1;i++){
        for(int j=0;j<r1;j++){
            cout<<mat2[i][j]<<" ";
        }cout<<endl;
    }

    return 0;

   

    

}