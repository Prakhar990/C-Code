/*PRINT FACTORIAL OF A NUMBER*/

#include <iostream>
using namespace std;
int main()
{
    int num;
    cout << "Enter number: ";
    cin >> num;
    int fact=1;
    int i=1;
    while(i<num){
        fact=num*(num-i);
        i++;
    }
}