/*CONVERTING DECIMAL TO BINARY*/

#include<iostream>
using namespace std;
int main()
{
    int number;
    cout << "Enter the decimal number: ";
    cin >> number;

    int answer=0;
    int base=1;


    while(number>0){
        int rem=number%2;
        answer+=rem*base;
        base*=10;
        number/=2;

        

    }

    cout << "The answer is: "<<answer<<endl;

    return 0;
}