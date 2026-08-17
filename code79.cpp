/*NAME OF THE ARRAY ALSO ACTS AS POINTERS*/

#include<iostream>
using namespace std;
int main()
{
    int arr[]={1,2,3,4,5};

    int *ptr=&arr[0];

    cout<<ptr<<endl<<arr<<endl<<*ptr<<endl<<*arr<<endl;

    return 0;
}