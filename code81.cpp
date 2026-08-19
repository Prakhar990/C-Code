/*BUBBLE SORT ALGRO*/

#include <iostream>
#include <vector>
using namespace std;

void bubblesort(vector <int> &v){
    for(int i=0;i<v.size()-1;i++){
        bool flag=false;
        for(int j=0;j<v.size()-i-1;j++){
            if(v[j]>v[j+1]){
                flag=true;
                swap(v[j],v[j+1]);
            }
        }
        if(flag==false){
            break;
        }
    }

    return; 
}

int main()
{
    int size;
    cout<<"Enter the size: ";
    cin>>size;

    vector <int> v(size);

    for(int i=0;i<size;i++){
        cin>>v[i];
    }

    bubblesort(v);

    for(int i=0;i<size;i++){
        cout<<v[i]<<" ";
    }cout<<endl;

    return 0;
}
