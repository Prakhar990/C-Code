/*CREATING AND STROING ADDRESS IN A POINTER*/

#include <iostream>
using namespace std;
int main()
{
    int x=20;
    float y=3.3;

    int *ptrint=&x;
    float *ptrfl=&y;

    cout<<&x<<"    "<<ptrint<<endl;
    cout<<&y<<"    "<<ptrfl<<endl;

    return 0;
}