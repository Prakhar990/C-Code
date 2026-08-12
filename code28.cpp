/*FIND THE SUM OF DIGITS FOR A GIVEN NUMBER N*/

#include <iostream>
using namespace std;
int main()
{
    int num;
    cout << "Enter number:  ";
    cin >> num;

    int sum=0;
    while(num>0){
        int rem=num%10;
        sum+=rem;
        num=num/10;

    }

    cout <<"sum is: " << sum<<endl;

    return 0;
}