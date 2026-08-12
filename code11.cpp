/*PRINT THE SUM OF THE FIRST N NATURAL NUMBERS ( N IS INPUT)*/
/*USING WHILE LOOP*/

#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter your value: ";
    cin >> n;

    int sum=0;
    int i=1;
    while (i<=n){
        sum+=i;
        i++;
    }

    cout << "The sum of " << n << " natural numbers is " << sum << endl;

    return 0;
}