/*UPDATING THE VALUE USING POINTER*/

#include <iostream>
using namespace std;
int main()
{
    int x=19;
    int *ptr;

    ptr=&x;

    *ptr=23;
    cout<<x<<endl;
    cout<<*ptr<<endl;
    return 0;
}