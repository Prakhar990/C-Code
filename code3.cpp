/*SWAPPING TWO NUMBERS USING A THIRD VARIABLE*/

#include <iostream>
using namespace std;
int main()
{
    int num1,num2;
    cout << "Enter num1: " << endl;
    cin >> num1;

    cout << "Enter num2: " << endl;
    cin >> num2;

    cout << "Previosuly:--" << endl;

    cout << "your num1 is:  " << num1 << endl;
    cout << "your num2 is:  " << num2 << endl;

    int temp;
    temp=num1;
    num1=num2;
    num2=temp;

    cout << "Now:--" << endl;

    cout << "your num1 is:  " << num1 << endl;
    cout << "your num2 is:  " << num2 << endl;

    return 0;

}