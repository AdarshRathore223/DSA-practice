#include <iostream>
using namespace std;
int main()
{
    int testcase, arrlen,firstgretest=INT64_MIN;
    cin >> testcase;
    for (int i = 0; i < testcase; i++)
    {
        cin >> arrlen;
        int arr[arrlen];
        for(int j=0;j<arrlen;i++){
            cin>>arr[j];
        if(arr[j]>0){
            firstgretest=arr[j];
        }
        }

    }
}