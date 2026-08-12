/*GIVEN AN INTEGER ARRAY A, RETURN THE PREFIX SUM/RUNNING SUM IN THE SAME ARRAY WITHOUT CREATING A NEW ARRAY- PART 2*/

#include <iostream>
using namespace std;
int main()
{
    
    int n;
    
    cout<<"Enter the size: "<<endl;
    cin>>n;
    
    int array[n];

    for(int i=0;i<n;i++){
        cin>>array[i];
    }

    int prfsxum=array[0];

    for(int i=1;i<n;i++){
        array[i]=prfsxum+array[i];
        prfsxum=array[i];
    }

    for(int i=0;i<n;i++){
        cout<<array[i]<<" ";
    }

    return 0;
}