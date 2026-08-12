/* ROTATE THE GIVEN ARRAY 'A' BY K STEPS, WHERE K IS NON-NEGATIVE.
NOTE: K CAN BE GREATER THAN N AS WELL WHERE N IS THE SIZE OF
ARRAY 'A'. WITHOUT USING EXTRA MEMORY .THIS IS THE CONCEPT OF VECTOR*/

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;
int main()
{
    vector <int> v={1,2,3,4,5};
    int k;
    cout<<"Enter k: ";
    cin>>k;
    int n=v.size();
    if(k>=n){
        k=k%n;
    }

    reverse(v.begin(),v.end());
    reverse(v.begin(),v.begin()+k);
    reverse(v.begin()+k,v.end());
    for(int ve: v){
        cout<<ve<<" ";
    }cout<<endl;

    return 0;


}
