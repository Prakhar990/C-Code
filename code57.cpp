/* ROTATE THE GIVEN ARRAY 'A' BY K STEPS, WHERE K IS NON-NEGATIVE.
NOTE: K CAN BE GREATER THAN N AS WELL WHERE N IS THE SIZE OF
ARRAY 'A'. */

#include <iostream>
using namespace std;
int main()
{
    int array[]={1,2,3,4,5};
    int n=5;
    int k;
    cout<<"Enter k: ";
    cin>>k;
    int ansarray[n];
    int j=0;

    for(int i=n-k;i<n;i++){
        ansarray[j]=array[i];
        j++;
    }

    for(int i=0;i<=k;i++){
        ansarray[j]=array[i];
        j++;
    }

    for(int i=0;i<n;i++){
        cout<<ansarray[i]<<endl;
    }

    return 0;
}