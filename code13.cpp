/*PRINT THE FIRST MULTIPLE OF 5 WHICH IS ALSO MULTIPLE OF 7*/

#include <iostream>
using namespace std;
int main()
{
    for(int i=5;;i+=5){
        if(i%7==0){
            cout << "The multiple is " << i << endl;
            break;
        }
    }
    return 0;
}

