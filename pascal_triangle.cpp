#include <iostream>
using namespace std;
int main(){
    int num,c;
    cin>>num;
    for(int i=0;i<num;i++){
        
        for(int k=0;k<=i;k++){
            if(i==0 || k== 0){
                c=1;
            }
            else{
                c=(c*(i-k+1))/k;
            }
            cout<<c<<"\t";
        }
        cout<<"\n";
    }
    
}