/*FIND THE LAST OCCURENCE OF AN ELEMENT X IN A GIVEN VECTOR*/
#include <iostream>
#include <vector>
using namespace std;
int main()
{
    vector <int> v;
    cout <<"Enter the elements of vector: "<<endl;
    for(int i=0;i<10;i++){
        int ele;
        cin>>ele;
        v.push_back(ele);
    }cout<<endl;

    cout<<"Enter the value to find: ";
    int x;
    cin>>x;

    int ans=-1;

    for(int i=0;i<v.size();i++){
        if(v[i]==x){
            ans=i;
        }
    }

    cout<<"The last occurence is: "<<ans<<endl;

    return 0;

}