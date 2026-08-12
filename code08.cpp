/*WAP TO PRINT THE VALUE IF IT IS DIVISIBLE BY 3 OR 5*/

#include <iostream>
using namespace std;
int main()
{
    int num;
    cout << "Enter your number: ";
    cin >> num;

    if ((num%3==0) || (num%5==0)){
        cout << "The number is: " << num <<endl;
    }

    return 0;
}