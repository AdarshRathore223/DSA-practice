#include <iostream>
using namespace std;
int main(){
    int size;
    bool result=false;
    cin>>size;
    int arr[size];

    for(int i =0;i<size;i++){
        for(int j=i;j<size;j++){
            for(int k=j;k<size;k++){
                if(i==j || j==k || i==k){
                    continue;
                }
                if(arr[i]<arr[k]<arr[j] && i < j < k){
                    cout<<i<<j<<k;
                    result=true;
                }
            }
        }
    }
    cout<<result;
}