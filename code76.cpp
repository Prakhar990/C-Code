/*SWAPPING VALUES BY USING POINTERS*/

#include <iostream>
using namespace std;
int swap(int *x,int *y){
    int temp=*x;
    *x=*y;
    *y=temp;

    return *x,*y;
}

int main()
{
    int x=10,y=20;

    int *pt1,*pt2;
    pt1=&x;
    pt2=&y;

    swap(pt1,pt2);

    

    cout<<x<<endl;
    cout<<y<<endl;

    return 0;
}