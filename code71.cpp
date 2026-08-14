/*ACESSING DATA THORUGH POINTER USING DEREFRENCE OPERATOR*/


#include<iostream>
using namespace std;
int main()
{
    int x=10;
    cout<<"Value is: "<<x<<endl;

    int *ptr;
    ptr=&x;

    cout<<"Adress of x: "<<&x<<endl;
    cout<<"Address of x stored: "<<ptr<<endl;
    cout<<"Value at address "<<ptr<<" "<<*ptr<<endl;

    return 0;
}