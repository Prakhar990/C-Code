/*COUNT THE NUMBEROF ELEMENTS STRICTLY GREATER THAN X*/
#include <iostream>
#include <vector>
using namespace std;
int main()
{
    vector <int> v;

    cout << "Enter the values: "<<endl;
    for(int i=0;i<10;i++){
        int ele;
        cin>>ele;
        v.push_back(ele);
    }

    int x;
    cout<<"Enter the x: "<<endl;
    cin>>x;

    int count=0;

    for(int i=0;i<v.size();i++){
        if(x<v[i]){
            count++;
        }
    }

    cout<<"The count is: "<<count;

    return 0;
}