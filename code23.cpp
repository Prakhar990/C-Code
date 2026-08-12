/* NUMERICAL RECTANGULAR PATTERN */
/* 1 2 3 4 5 6
   1 2 3 4 5 6
   1 2 3 4 5 6
   1 2 3 4 5 6
*/

#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter the rows: ";
    cin >> n;

    for(int i=0;i<n;i++){
        for(int j=1;j<7;j++){
            cout << j << " ";
        }cout << endl;
    }

    return 0;
}