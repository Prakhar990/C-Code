/*FINDING LENGTH OF AN ARRAY*/
/*TRAVERSING THROUGH FOR LOOP*/
/*TRAVERSING THROUGH FOR EACH LOOP*/

#include<iostream>
using namespace std;
int main()
{
    int array[]={1,2,3,4};

    int size=sizeof(array)/sizeof(array[0]);

    cout<<"The size is"<<size<<endl;

    for(int i=0;i<size;i++){
        cout<<"The "<<i<<"th"<<" element is: "<<array[i]<<endl;
    }

    for(int ele: array){
        cout<<"The"<<" element is: "<<ele<<endl;
    }
    int i=0;
    while(i<size){
        cout<<array[i]<<endl;
        i++;
    }

    return 0;
}
