#include <iostream>
using namespace std;
int main(){
    int num,temp;
    cin>>num;
    temp=num-1;
    for(int i=0;i<num;i++){
        for(int j=0;j<num;j++){
            if(j>=temp){
                cout<<"* ";   
            }
            else{
                cout<<"  ";
            }
        }
        temp--;
        cout<<"\n";
    }
}