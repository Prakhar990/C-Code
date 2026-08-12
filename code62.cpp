/* GIVEN AN INTEGER ARRAY 'A' SORTED IN NON-DECREASING
ORDER, RETURN AN ARRAY OF THE SQUARES OF EACH NUMBER
SORTED IN NON-DECREASING ORDER. */

#include <iostream>
using namespace std;
int main()
{
    int array[]={-10,-3,4,5,6};
    int n=5;

    for(int i=0;i<n;i++){
        array[i]=array[i]*array[i];
    }

    int lft_ptr=0;
    int rgt_ptr=n-1;

    while(lft_ptr<rgt_ptr){
        if(array[lft_ptr]>array[rgt_ptr]){
            swap(array[lft_ptr],array[rgt_ptr]);
        }else{
            
        }

        
    }

    for(int i=0;i<n;i++){
        cout<<array[i]<<" ";
    }

    return 0;
}