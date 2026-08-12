/*TAKING INPUT AND OUTPUT FROM USER FOR VECTOR*/
#include <iostream>
#include <vector>
#include <math.h>
using namespace std;
int main()
{
    vector <int> v;
    for(int i=0;i<5;i++){
        int ele;
        cin>>ele;
        v.push_back(ele);
    }

    /*PRINTING THROUGH FOR LOOP*/
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }cout<<endl;

    v.insert(v.begin()+2,6);

    /*PRINTING THROUGH FOR EACH LOOP*/
    for(int ele: v){
        cout<<ele<<" ";
    }cout<<endl;

    v.erase(v.end()-2);

    /*PRINTING THROUGH WHILE LOOP*/
    int idx=0;
    while(idx<v.size()){
        cout<<v[idx]<<" ";
        idx++;
    }

    return 0;
}