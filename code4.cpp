 /*PROGRAM FOR OPERATORS*/
 
 #include <iostream>
 using namespace std;
 int main()
 {
    int num1=6, num2=3;

    /*ARITHMETIC OPERATORS*/

    cout << num1+num2 << endl;
    cout << num1-num2 << endl;
    cout << num1*num2 << endl;
    cout << num1/num2 << endl;
    cout << num1%num2 << endl;

    /*RELATIONAL OPERATORS*/
    cout << (num1>num2) <<endl;

    /*LOGICAL OPERATORS*/
    bool expr1=true;
    bool expr2=false;

    cout << (expr1 && expr2) <<endl;
    cout << (expr1 || expr2) <<endl;
    cout <<(!expr1) <<endl;


    /*BITWISE OPERATORS*/
    int a=5,b=8;

    cout << (a<<1) <<endl;
    cout << (a>>1) <<endl;

    cout << (a & b) <<endl;
    cout << (a | b) <<endl;

    /*SIZE OF OPERATOR*/
    cout << sizeof(a) <<endl;

    /*COMMA OPERATOR*/
    // int y=2,3,4; //IT WILL ALWAYS TAKE LAST VALUE 
    // cout << y <<endl;

    /*TERNARY OPERATOR*/
    a==b? cout << "Hello" : cout << "World" <<endl;

    /*ADRESS OPERATOR*/
    cout << &a <<endl;

    /*INCREMENT AND DECREMENT*/
    //HERE A=5 already
    cout <<(a++)<<endl; //a=5
    cout<<a<<endl; //a=6


    return 0;
    
 }