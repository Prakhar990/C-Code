/*SEARCH IF A GIVEN ELEMENT IS PRESENT IN A ARRAY OR NOT*/

#include<iostream>
using namespace std;
int main()
{
    int array[10];

    cout<<"Enter the elements: "<<endl;

    for(int i=0;i<10;i++){
        cin>>array[i];
    }

    int search;
    cout<<"Enter the element to search: "<<endl;
    cin >>search;

    for(int i=0;i<10;i++){
        if(array[i]==search){
            cout<<"Index is: "<<i<<endl;
        }
        if(i==9){
            cout<<"-1"<<endl;
        }
    }

    return 0;
}