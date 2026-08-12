/*PRINT THE SUM OF THE FIRST N NATURAL NUMBERS ( N IS INPUT)*/
/*USING FOR LOOP*/

#include <iostream>
using namespace std;
int main()
{
    int n;
    cout <<"Enter your value: ";
    cin >> n;
    int sum=0;
    for(int i=1;i<=n;i++){
        sum+=i;
    }

    cout << "Sum of "<< n<<" Natural numbers is " << sum <<endl;
    return 0;
}