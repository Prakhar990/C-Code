/*PRINT THE SUM OF THE FIRST N NATURAL NUMBERS ( N IS INPUT)*/
/*USING DO WHILE LOOP*/

#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter your value: " ;
    cin >> n;

    int i=1,sum=0;
    do{
        sum+=i;
        i++;

    }while(i<=n);

    cout << "The sum is: " << sum << endl;

    return 0;
}