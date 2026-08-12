/*FIND THE UNIQUE NUMBER IN A GIVEN ARRAY WHERE ALL THE
ELEMENTS ARE BEING REPEATED TWICE WITH ONE VALUE
BEING UNIQUE.*/

#include <iostream>
using namespace std;
int main()
{
    int array[]={2,3,1,3,2,4,1};
    int size=sizeof(array)/sizeof(array[0]);

    for(int i=0;i<size;i++){
        for(int j=i+1;j<size;j++){
            
            if(array[i]==array[j]){
                array[i]=array[j]=0;
                break;
            }

            // if(array[i]==0){
            //     break;
            // }
           
        }
    }

    for(int i=0;i<size;i++){
        if(array[i]!=0){
            cout<<array[i]<<endl;        }
    }

    return 0;
}