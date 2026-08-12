/*NUMERICAL RECTANGULAR PATTERN */
/* 1 2 3 4 5 6 7
   2 3 4 5 6 7 1
   3 4 5 6 7 1 2
   4 5 6 7 1 2 3
   5 6 7 1 2 3 4
   6 7 1 2 3 4 5
   7 1 2 3 4 5 6
*/

#include <iostream>
using namespace std;
int main()
{
    int n;
    cout <<"Enter the rows/cols: ";
    cin >> n;
    int i=1,j=i;
    for(int i=1;i<=n;i++){
        for(j=i;j<=n;j++){
           
            cout << j <<" ";
        }

        if(j>n){
            for(int t=1;t<=i-1;t++){
                cout << t <<" ";
            }
        }cout <<endl;
    }

    return 0;
}