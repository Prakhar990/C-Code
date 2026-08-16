/*PRE POST INCREMENT OF POINTERS*/

#include <iostream>
using namespace std;
int main()
{
    int arr[]={1,19};

    int *ptr=&arr[0];

    cout<<ptr<<" "<<*ptr<<endl;
    ptr++;
    cout<<ptr<<" "<<*ptr<<endl;

    return 0;
}