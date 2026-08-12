/*FINDING POWER OF A BASE NUMBER*/

#include <iostream>
using namespace std;
int main()
{
    int base,power;
    cout << "Enter base value; ";
    cin >> base;

    cout<<endl;

    cout << "Enter power value: ";
    cin >>power;

    int result=1;

    for(int i=1;i<=power;i++){
        result=base*result;
    }
    cout << "The answer: "<<result<<endl;

    return 0;
}