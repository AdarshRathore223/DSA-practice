#include <iostream>
using namespace std;
int main(){
    int num,even=0,odd=0;
    cin>>num;
    int arr[num];
    for(int i =0;i<num;i++){
        cin>>arr[i];
    }
    for(int i = 0;i<num;i++){
        if(i%2==0){
            even+=arr[i];
        }
        else{
            odd+=arr[i];
        }

    }
    cout<<even<<" "<<odd;
}