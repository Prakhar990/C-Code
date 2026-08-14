/*ADDITION OPERATION USING POINTERS*/

#include <iostream>
using namespace std;
int main()
{
    int x,y,result;
    cin>>x>>y;

    int *ptrx,*ptry,*ptr_result;

    ptrx=&x;
    ptry=&y;
    ptr_result=&result;

    *ptr_result = *ptrx + *ptry ;

    cout<<result<<endl;
    cout<<*ptr_result<<endl;

    return 0;

    
}