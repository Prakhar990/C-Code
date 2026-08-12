/*MULTIPLICATION OF 2 MATRICES ENTERED BY THE USER*/

#include <iostream>
using namespace std;
int main()
{
    int r1,c1,r2,c2;

    cout<<"Enter row 1 and column 1: ";
    cin>>r1>>c1;
    
    cout<<"Enter row 2 and column 2: ";
    cin>>r2>>c2;

    int mat1[r1][c1],mat2[r2][c2],mat3[r1][c2]={};

    cout<<"Enter the elements for mat 1:"<<endl;

    for(int i=0;i<r1;i++){
        for(int j=0;j<c1;j++){
            cin>>mat1[i][j];
        }
    }

    cout<<endl;

    cout<<"Enter the elements for mat 2:"<<endl;

    for(int i=0;i<r2;i++){
        for(int j=0;j<c2;j++){
            cin>>mat2[i][j];
        }
    }

    if(c1==r2){
        for(int i=0;i<r1;i++){
            for(int j=0;j<c2;j++){
                for(int k=0;k<r2;k++){
                    mat3[i][j]+=mat1[i][k]*mat2[k][j];
                }
            }
        }
    }else{
        cout<<"Make sure the column 1 and row 2 are same";
    }

    for(int i=0;i<r1;i++){
        for(int j=0;j<c2;j++){
            cout<<mat3[i][j]<<" ";
        }cout<<endl;
    }

    return 0;

    
}