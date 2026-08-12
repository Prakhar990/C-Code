/*SUM OF THE SEREIS 1-2+3-4...n*/

#include <iostream>
using namespace std;
int main()
{
    int i=1,n;
    cout << "Enter value: ";
    cin >> n;

    int sum=0;
    while(i<=n){
        if(i%2==0){
            sum-=i;
        }else{
            sum+=i;
        }i++;
    }cout << sum <<endl;

    return 0;
}