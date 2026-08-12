/*SORT AN ARRAY ONLY CONSISTING OF 0S AND 1S*/
/* TWO POINTERS PROBLEMS*/

#include <iostream>
using namespace std;
int main(){
    int array[]={1,1,0,0,1,0,1,0};
    int size=sizeof(array)/sizeof(array[0]);
    int lft_ptr=0;
    int rgt_ptr=size-1;

    while(lft_ptr<rgt_ptr){
        if(array[lft_ptr]==1 && array[rgt_ptr]==0){
            array[lft_ptr]=0;
            array[rgt_ptr]=1;
            lft_ptr++;
            rgt_ptr--;
        }

        if(array[lft_ptr]==0){
            lft_ptr++;
        }

        if(array[rgt_ptr]==1){
            rgt_ptr--;
        }
    }

    for(int i=0;i<size;i++){
        cout<<array[i]<<" ";
    }

    return 0;
    
}