/*SORT AN ARRAY ONLY CONSISTING OF 0S AND 1S*/
/* TWO POINTERS PROBLEMS*/
#include <iostream>
using namespace std;
int main()
{
    int array[]={1,1,0,0,1,0,1,0};
    int zeroCount=0;
    
    int size=sizeof(array)/sizeof(array[0]);

    for(int i=0;i<size;i++){
        if(array[i]==0){
            zeroCount++;
        }
    }

    

    for(int i=0;i<size;i++){
        if(i<zeroCount){
            array[i]=0;
        }else{
            array[i]=1;
        }
    }

    

    for(int i=0;i<size;i++){
        cout<<array[i]<<" ";
    }

    return 0;
}