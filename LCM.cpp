#include <iostream>
using namespace std;
int main(){
    int num1,num2,minmul;
    cin>>num1;
    cin>>num2;
    if(num1>num2){
        minmul=num1;
    }
    else{
        minmul=num2;
    }
    while(true){
        if(minmul % num1==0 && minmul % num2 == 0){
            cout<<minmul;
            break;
        }
        minmul++;
    }
}