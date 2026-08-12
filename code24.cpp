/* NUMERICAL HOLLOW RECTANGULAR PATTERN */
/* 1 2 3 4 5 6
   1         6
   1         6
   1 2 3 4 5 6
*/

#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter your rows: ";
    cin >> n;

    for(int i=0;i<n;i++){
        for(int j=1;j<7;j++){
            if(i==0 || i==n-1){
                cout << j << " ";
            }
            else{
                
                if(j>1 && j<6){
                    cout << "  ";
                }else {
                    cout << j << " ";
                }
                
            }
        }cout << endl;
    }
}