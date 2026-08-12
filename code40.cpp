/*TAKING INPUT IN THE ARRAY*/

#include<iostream>
using namespace std;
int main()
{
    char array[5];
    for(int i=0;i<5;i++){
        cin>>array[i];
    }

    for(int i=0;i<5;i++){
        cout << array[i]<<endl;
    }

    return 0;
}