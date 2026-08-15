/*SWAPPING VALUES BY PASS BY REFRENCE*/

#include <iostream>
using namespace std;
int swap(int &x, int &y){
    int temp=x;
    x=y;
    y=temp;

    return x,y;
}

int main(){
    int x=10,y=20;

    swap(x,y);

    cout<<"x"<<" "<<x<<endl;
    cout<<"y"<<" "<<y<<endl;

    return 0;
}