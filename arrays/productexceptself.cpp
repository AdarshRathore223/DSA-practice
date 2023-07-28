#include <iostream>
using namespace std;
int main(){
    int num,product=1;
    cin>>num;
    int arr[num];
    for(int i =0;i<num;i++){
        cin>>arr[i];
        product*=arr[i];
    }
    for(int i =0;i<num;i++){
        cout<<product/arr[i]<<" ";
    }

}