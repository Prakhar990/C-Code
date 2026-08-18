/*BASIC DEMO OF RECURSION*/

#include <iostream>
using namespace std;
void printHello(int n){
    

    if(n==0){
        return;
    }
    cout<<"hello"<<endl;

    printHello(n-1);
}

int main()
{
    int n=5;

    printHello(5);

    return 0;

}