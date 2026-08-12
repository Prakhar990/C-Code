/*PRINT "ODD" IF THE INPUT VALUE IS ODD, OTHERWISE
PRINT "EVEN".*/

#include <iostream>
using namespace std;
int main()
{
    int num;
    cout << "Enter any number: ";
    cin >> num;

    if(num%2!=0){
        cout << num << " is odd" <<endl;
    }else {
        cout << num << " is even" <<endl;
    }

    return 0;
}