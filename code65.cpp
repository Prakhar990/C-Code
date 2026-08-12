/*CHECK IF WE CAN PARTITION THE ARRAY INTO TWO SUB ARRAYS WITH EQUAL SUM. MORE FORMALLY, CHECK THAT THE PREFIC SUM OF A PART OF THE ARRAY IS EQUAL TO THE SUFFIX SUM OF THE REST OF THE ARRAY*/

#include <iostream>
using namespace std;
int main()
{
    int array[]={1,2,3,3,2,1};

    int tsum=0;
    for(int i=0;i<6;i++){
        tsum+=array[i];
    }

    int ssum=0;
    int psum=0;
    
    for(int i=0;i<6;i++){
        psum+=array[i];

        ssum=tsum-psum;

        if(ssum==psum){
            cout<<"We did it"<<endl;
        }
    }
}