/*PRINT THE NUMBERS FROM 1 TO 50 EXCEPT THE MULTIPLES OF 3*/

#include <iostream>
using namespace std;
int main()
{
    for(int i=1;i<=50;i++){
        if(i%3==0){
            continue;
        }else{
            cout << i << endl;
        }
        
    }

    return 0;
}