/*FIND THE SECOND LARGEST ELEMENT IN AGIVEN ARRAY*/

#include<iostream>
using namespace std;
int largestindex(int array[],int size){
    int max=array[0];
    int index=-1;
    for(int i=0;i<size;i++){
        if(array[i]>=max){
            max=array[i];
            index=i;
            
        }
    }

    return index;
}

int main()
{
    int array[]={2,3,1,7,6,5,7};
    int size=sizeof(array)/sizeof(array[0]);
    
    int lidx=largestindex(array,size);
    //array[lidx]=-1;
    for(int i=0;i<size;i++){
        if(array[i]==array[lidx]){
            array[i]=-1;
        }
    }
    lidx=largestindex(array,size);
    cout<<array[lidx]<<endl;

    return 0;

    
}