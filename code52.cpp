/*TARGET SUM*/
/*FIND THE TOTAL NUMBER OF PAIRS IN THE ARRAY WHOSE SUM IS EQUAL TO THE GIVEN VALUE OF X*/

#include<iostream>
using namespace std;
int main()
{
    int array[]={3,4,6,7,1};

    int target;
    cout<<"target: ";
    cin>>target;

    int pairs=0;

    int size=sizeof(array)/sizeof(array[0]);

    for(int i=0;i<size;i++){
        for(int j=i+1;j<size;j++){
            if(array[i]+array[j]==target){
                pairs++;
            }
        }
    }

    cout<<"Total pairs is "<<pairs<<endl;

    return 0;
}