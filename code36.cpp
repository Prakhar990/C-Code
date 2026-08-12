/*SAME NAME MULTIPLE FUNCTIONS*/

#include<iostream>
using namespace std;
int add(int num1,int num2){
    int sum=num1+num2;

    return sum;
}

int add(int num1, int num2, int num3){
    int sum=num1+num2+num3;

    return sum;
}

double add(double num1, double num2){
    float sum=num1+num2;

    return sum;
}

int main(){
   cout<< add(3,4)<<endl;
    cout<<add(3,4,5)<<endl;
    cout<<add(3.3,4.4)<<endl;

    return 0;


}