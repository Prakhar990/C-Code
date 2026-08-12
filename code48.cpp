/*COUNT THE NUMBER OF OCCURENCES OF A PARTICULAR ELEMENT*/
#include<iostream>
#include<vector>
using namespace std;
int main()
{
    vector <int> v;
    cout<<"Enter the values: "<<endl;
    for(int i=0;i<10;i++){
        int ele;
        cin>>ele;
        v.push_back(ele);
    }

    cout<<"Enter the x: "<<endl;
    int x;
    cin>>x;

    int count=0;
    for(int i=0;i<v.size();i++){
        if(v[i]==x){
            count++;
        }
    }

    cout<<"The count of "<<x<<" is "<<count<<endl;

    return 0;
}