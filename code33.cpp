/*CONVERTING BINARY TO DECIMAL BY USER INPUT*/

#include<iostream>
using namespace std;
int main()
{
    int binary;
    cout <<"Enter the binary number: ";
    cin >> binary;

    int result=0;
    int base=1;
    

    while(binary>0){
        int rem=binary%10;
        binary=binary/10;
        
        result+=(rem*base);
        base=base*2;
    }

    cout <<"The result is: " <<result<<endl;

    return 0;
}