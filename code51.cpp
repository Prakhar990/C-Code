/*FIND THE DIFFERENCE BETWEEN THE SUM OF THE ELEMENTS AT EVEN INDICES TO THE SUM OF THE ELEMENTS OF ODD INDICES*/
#include <iostream>
#include <vector>
using namespace std;
int main()
{
    vector <int> v;
    cout<<"Enter the values: "<<endl;
    for(int i=0;i<8;i++){
        int ele;
        cin>>ele;
        v.push_back(ele);

    }

    int evenSum=0;
    int oddSum=0;
    for(int i=0;i<v.size();i++){
        if(i%2==0){
            evenSum+=v[i];
        }else{
            oddSum+=v[i];
        }
    }

    cout<<"The difference is "<<(evenSum-oddSum)<<endl;

    return 0;
}