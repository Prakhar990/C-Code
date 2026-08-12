/*FIND THE MAXIMUM VALUE OUT OF ALL THE ELEMENTS IN THE ARRAY*/


#include<iostream>
using namespace std;
int main()
{
    int array[]={1,5,3,4,5};
    int size=sizeof(array)/sizeof(array[0]);
    int max=array[0];
    for(int i=0;i<size;i++){
        if(array[i]>max){
            max=array[i];
        }
    }
    cout<<"The max element is: "<<max<<endl;

    return 0;
}