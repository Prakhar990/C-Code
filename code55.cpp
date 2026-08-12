/*FIND THE SECOND LARGEST ELEMENT IN THE GIVEN ARRAY-PART1*/

#include<iostream>
using namespace std;
int main(){
    int array[]={2,3,5,7,6,1,7};
    int size=sizeof(array)/sizeof(array[0]);
    int smax=array[0];
    int max=array[1];

    for(int i=0;i<size;i++){
        if(array[i]>=max){
            max=array[i];
        }
    }

    for(int i=0;i<size;i++){
        if((array[i]!=max) && (array[i]>=smax)){
            smax=array[i];
        }
    }

    cout<<smax<<endl;

    return 0;



}