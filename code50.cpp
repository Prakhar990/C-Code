/*CHECK OUT IF THE GIVEN VECTOR IS SORTED OR NOT*/
#include <iostream>
#include <vector>
using namespace std;
int main()
{
    vector <int> v;
    cout<<"Enter the values of elements: "<<endl;
    for(int i=0;i<10;i++){
        int ele;
        cin>>ele;
        v.push_back(ele);
    }

    bool sorted=true;

    for(int i=0;i<v.size()-1;i++){
        if(v[i]>v[i+1]){
            sorted=false;
        }
    }

    cout<<sorted<<endl;

    return 0;

}