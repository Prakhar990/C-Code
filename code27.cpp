/*COUNT THE NUMBER OF DIGITS OF A GIVEN NUMBER*/
#include <iostream>
using namespace std;
int main()
{
    int num;
    cout << "Enter your num:  ";
    cin >> num;

    int count=1;
    while(num >0){
        num=num/10;
        if(num != 0){
            count++;
        }
    }

    cout << "Digits are: " << count << endl;

    return 0;
    
}
