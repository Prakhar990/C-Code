/*GIVEN AN INTEGER ARRAY A, RETURN THE PREFIX SUM/RUNNING SUM IN THE SAME ARRAY WITHOUT CREATING A NEW ARRAY*/

#include <iostream>
#include <vector>
using namespace std;
void runningSum(vector <int> &v){
    int prefixsum=0;
    for(int i=1;i<v.size();i++){
        v[i]=v[i-1]+v[i];

    }

    return;
}
int main()
{
    vector <int> v;
    int n;

    cout<<"Enter the size: ";
    cin>>n;

    for(int i=0;i<n;i++){
        int ele;
        cin>>ele;
        v.push_back(ele);
    }

    runningSum(v);

    for(int i=0;i<n;i++){
        cout<<v[i]<<" ";
    }

    cout<<endl;

    return 0;
}