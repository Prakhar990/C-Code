/*ACCESSING GLOBAL VARIABLES*/
#include <iostream>
using namespace std;

int apples=10;
int main()
{
    int apples=5;

    cout <<::apples<<endl;

    return 0;
}