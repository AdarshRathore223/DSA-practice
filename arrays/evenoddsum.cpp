#include <iostream>
using namespace std;
int main(){
    long long num,seraja=0,dima=0;
    cin>>num;
    int first=0,last=num-1;
    long long arr[num];
    for(long long i =0;i<num;i++){
        cin>>arr[i];
    }
    for(int i=0;i<num;i++){
        if(i%2==0){
            if(arr[first]>arr[last]){
                seraja+=arr[first];
                first++;
            }else{
                seraja+=arr[last];
                last--;
            }
        }else{
            if(arr[first]>arr[last]){
                dima+=arr[first];
                first++;
            }else{
                dima+=arr[last];
                last--;
            }
        }
    }
    cout<<seraja<<" "<<dima;
}