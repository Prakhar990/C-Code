/*WAP TO IDENTIFY IS IT VOWEL OR CONSONENTS*/

#include <iostream>
using namespace std;
int main()
{
    char character;
    cout << "Enter a character: ";
    cin >> character;

    switch (character){

        case 'a':
            cout << "Vowel" <<endl;
            break;

            
        case 'e':
            cout << "Vowel" <<endl;
            break;

        
        case 'i':
            cout << "Vowel" <<endl;
            break;


        
        case 'o':
            cout << "Vowel" <<endl;
            break;


            
        case 'u':
            cout << "Vowel" <<endl;
            break;

        default:
            cout << "Consonents"<<endl;
            break;

    }

    return 0;
}