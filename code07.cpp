/*WAP TO PRINT THE VALUE IF IT IS EVEN AND DIVISIBLE BY 3*/

#include <iostream>
using namespace std;
int main()
{
    int num;
    cout << "Enter a number: ";
    cin >> num;


    if((num % 2 == 0) && (num % 3 == 0)){
        cout << "Your number is: " << num <<endl;
    }

    return 0;
}