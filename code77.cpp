/*FIRST AND LAST OCCURENECE OF A CHARCATER*/

#include <iostream>
using namespace std;

int find(int *pf,int *pl, string s, char ch){
    for(int i=0;i<s.size();i++){
        if(s[i]==ch){
            *pf=i;
            break;
        }
    }

    for(int i=s.size()-1;i>=0;i--){
        if(s[i]==ch){
            *pl=i;
            break;
        }
    }

    return *pf,*pl;
}
int main()
{
    string s="aaabac";
    char ch='a';
    int first=-1,last=-1;
    int *pf,*pl;
    pf=&first;
    pl=&last;

    find(pf,pl,s,ch);

    cout<<*pf<<" "<<*pl;

}