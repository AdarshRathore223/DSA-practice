#include <iostream>
using namespace std;
int main(){
    int arr[]={4,1,3,2,0};
    int n=sizeof(arr)/sizeof(int);
    for (int i = 1; i <= n-1; i++)
    {
        int j=i-1;
        int handpicked=arr[i];
        while(j>=0 and handpicked<arr[j]){
            arr[j+1]=arr[j];
            j--;
        }
        arr[j+1]=handpicked;
    }
    for(int i =0 ;i<n;i++){
        cout<<arr[i]<<" ";
    }
}