/*WAP TO DIVIDE PEOPLE INTO 3 AGE GROUPS DEPENDING UPON THEIR AGE*/
#include <iostream>
using namespace std;
int main()
{
    int age;
    cout << "Enter your age: ";
    cin >> age;

    if(age <=12){
        cout << "Child" <<endl;
    }
    else if ( age>12 && age<=18){
        cout << "Teenager" <<endl;

    }
    else {
        cout << "Adult" <<endl;

    }

    return 0;
}