/* GIVEN AN ARRAY OF INTEGERS 'A', MOVE ALL THE EVEN INTEGERS AT THE
BEGINNING OF THE ARRAY FOLLOWED BY ALL THE ODD INTEGERS. THE
RELATIVE ORDER OF ODD OR EVEN INTEGERS DOES NOT MATTER. RETURN
ANY ARRAY THAT SATISFIES THE CONDITION. */

#include <iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the size: ";
    cin>>n;
    int array[n];

    cout<<"Enter the elements: "<<endl;
    for(int i=0;i<n;i++){
        cin>>array[i];
    }

    int lft_ptr=0;
    int rgt_ptr=n-1;

    while(lft_ptr<rgt_ptr){
        if(array[lft_ptr]%2!=0 && array[rgt_ptr]%2==0){
            int temp=array[rgt_ptr];
            array[rgt_ptr]=array[lft_ptr];
            array[lft_ptr]=temp;
            lft_ptr++;
            rgt_ptr--;
        }

        if(array[lft_ptr]%2==0){
            lft_ptr++;
        }

        if(array[rgt_ptr]%2!=0){
            rgt_ptr--;
        }
    }

    for(int i=0;i<n;i++){
        cout<<array[i]<<" ";
    }

    return 0;
}