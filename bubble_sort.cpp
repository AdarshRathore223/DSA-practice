#include <bits/stdc++.h>
using namespace std;
int main(){
    int arr[]={5,3,4,2,2,1};
    int n=sizeof(arr)/sizeof(int);
    for(int i=0;i<n-1;i++){
        for(int j=0;j<n-1;j++){
            if(arr[j]>arr[j+1]){
                swap(arr[j],arr[j+1]);
            }
        }
    }
    for(int i=0;i<n;i++){
        cout<<arr[i]<<",";
    }
}