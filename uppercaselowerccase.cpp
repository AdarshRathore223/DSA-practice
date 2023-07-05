#include <iostream>
using namespace std;
int main(){
    int charater=getchar();
    if(charater>=65 && charater<=90){
        charater+=32;
        cout<<(char)charater;
    }
    else if(charater>=97 && charater<=122){
        charater-=32;
        cout<<(char)charater;
    }
    else{
        cout<<"Invalid";
    }
}