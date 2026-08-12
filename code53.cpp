/*COUNT THE NUMBER OF TRIPLET WHOSE SUM IS EQUAL TO GIVEN VALUE OF X*/

#include <iostream>
using namespace std;
int main()
{
    int array[]={3,1,2,4,0,6};
    int target=5;
    int triplet=0;
    int size=sizeof(array)/sizeof(array[0]);
    for(int i=0;i<size;i++){
        for(int j=i+1;j<size;j++){
            for(int k=j+1;k<size;k++){
                if(array[i]+array[j]+array[k]==target){
                    triplet++;
                }
            }
        }
    }

    cout<<"triplet is: "<<triplet<<endl;

    return 0;


    
}