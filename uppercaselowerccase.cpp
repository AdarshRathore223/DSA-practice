#include <iostream>
using namespace std;
int main()
{
    int spaces = 0, aplha = 0, digit = 0, special = 0;
    char character =cin.get();
    // if(charater>=65 && charater<=90){
    //     charater+=32;
    //     cout<<(char)charater;
    // }
    // else if(charater>=97 && charater<=122){
    //     charater-=32;
    //     cout<<(char)charater;
    // }
    // else{
    //     cout<<"Invalid";
    // }
    while (character != '$')
    {
        if (character == '\n' || character == ' ' || character == '\t')
        {
            spaces++;
        }
        else if ((character >= 'A' && character <= 'Z') || (character >= 'a' && character <= 'z'))
        {
            aplha++;
        }
        else if (character >= '0' and character <= '9')
        {
            digit++;
        }
        else
        {
            special++;
        }
        character = cin.get();
    }
    cout << spaces << " " << aplha << " " << digit << " " << special;
}