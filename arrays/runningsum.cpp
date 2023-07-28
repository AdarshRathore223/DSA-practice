#include <iostream>
using namespace std;
int main(){
    int num,sum=0;
    cin>>num;
    int arr[num],result[num]={0};

    for(int i =0;i<num;i++){
        cin >> arr[i];
       for(int j =0 ; j<i;j++){
        result[i]+=arr[j];
       }
    }
    for(int i =0;i<num;i++){
        cout<<result[i]+arr[i]<<" ";
    }
    
}