/*SORTING PRACTISE*/

#include <iostream>
#include <vector>
using namespace std;

void BubbleSort(vector <int> &v){
    int n=v.size();
    for(int i=0;i<n-1;i++){
        for(int j=0;j<n-i-1;j++){
            if(v[j]>v[j+1]){
                swap(v[j],v[j+1]);
            }
        }
    }

    return;
    
}

/*
5 4 3 2 1
i=0,j=0,0<4
5>4--swap
4 5 3 2 1
i=0,j=1,1<4
5>3--swap
4 3 5 2 1
i=0,j=2,2<4
5>2--swap
4 3 2 5 1
i=0,j=3,3<4
5>1--swap
4 3 2 1 5
i=0,j=4,4!<4

4 3 2 1 5
i=1,j=0,0<3
4>3--swap
3 4 2 1 5
i=1,j=1,1<3
4>2--swap
3 2 4 1 5
i=1.j=2,2<3
4>1--swap
3 2 1 4 5
i=1,j=3,3!<3

3 2 1 4 5
i=2,j=0,0<2
3>2--swap
2 3 1 4 5
i=2,j=1,1<2
3>1--swap
2 1 3 4 5
i=2,j=2,2!<2

2 1 3 4 5
i=3,j=0,0<1
2>1--swap
1 2 3 4 5
i=3,j=1,1!<1

1 2 3 4 5--ans

*/

void SelectionSort(vector <int> &v){
    int n=v.size();

    for(int i=0;i<n-1;i++){
        int min=i;

        for(int j=i+1;j<n;j++){
            if(v[j]<v[min]){
                min=j;
            }
        }

        if(i!=min){
            swap(v[i],v[min]);
        }
    }

    return ;
}

/*
 5 4 3 2 1
 i=0,min=0,j=1
 4<5--min=1
 i=0,j=2,min=1
 3<4--min=2
 i=0,j=3,min=2
 2<3--min=3
 i=0,j=4,min=3
 1<2--min=4
 i=0,j=5--close
 0!=4--swap
 1 4 3 2 5

 1 4 3 2 5
 i=1,j=2,min=1
 3<4--min=2
 i=1,j=3,min=2
 2<3--min=3
 i=1,j=4,min=3
 5>3--close
 i=1,min=3
 1!=3--swap
 1 2 3 4 5


*/

void InsertionSort(vector <int> &v){
    int n=v.size();

    for(int i=1;i<n;i++){
        int curr=v[i];
        int j=i-1;
        while(j>=0 && v[j]>curr){
            v[j+1]=v[j];
            j--;
        }

        v[j+1]=curr;
    }

    return;
}

/*
5 4 3 2 1

i=1,j=0,curr=4
0>=0 && 5>4
5 5 3 2 1
j=-1
4 5 3 2 1

i=2,curr=5,j=1
1>=0 && 



*/


int main()
{
    int size;
    cout<<"Enter the size of the array:";
    cin>>size;

    vector <int> v(size);

    for(int i=0;i<size;i++){
        cin>>v[i];
    }

    // BubbleSort(v);
    SelectionSort(v);
    // InsertionSort()

    for(int i=0;i<size;i++){
        cout<<v[i]<<" ";
    }

    return 0;
}