/*NUMERICAL RECTANGULAR PATTERN*/
/* 1 2 1 2 1 2
   2 1 2 1 2 1
   1 2 1 2 1 2
   2 1 2 1 2 1
*/

#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter rows: ";
    cin >> n;

    for(int i=0;i<n;i++){
        for(int j=0;j<6;j++){
            if(i%2==0 && j%2==0){
                cout << "1";

            }else if(i%2==0 && j%2!=0){
                cout << "2";
            }else if(i%2!=0 && j%2==0){
                cout << "2";
            }else if(i%2!=0 && j%2!=0){
                cout <<"1";
            }
        }cout <<endl;
    }
}