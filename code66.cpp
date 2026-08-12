/*DECLARATION AND USER INPUT FOR 2D ARRAYS*/

#include <iostream>
using namespace std;
int main(){
    int rows,cols;
    cout<<"Enter the rows: ";
    cin>>rows;

    cout<<"Enter the columns: ";
    cin>>cols;

    int array[rows][cols];

    for(int i=0;i<rows;i++){
        for(int j=0;j<cols;j++){
            cin>>array[i][j];
        }
    }

    for(int i=0;i<rows;i++){
        for(int j=0;j<cols;j++){
            cout<<array[i][j]<<" ";
        }cout<<endl;
    }

    return 0;
}