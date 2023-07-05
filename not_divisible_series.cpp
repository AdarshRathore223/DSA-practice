#include <iostream>
using namespace std;
int main(){
    int terms,num,temp;
    cin>>terms;
    cin>>num;
    int i=0;
    while(true){
        if(terms==0){
            break;
        }
        temp=(3*i)+2;
        if(temp % num != 0 && temp > num){
            cout<<temp<<"\n";
            terms--;
        }
        i++;
    }
}