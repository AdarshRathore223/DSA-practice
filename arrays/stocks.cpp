#include <iostream>
#include <climits>
using namespace std;

int main()
{
    int size;
    cin >> size;
    int arr[size];
    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }
     int result=0, minVal = INT_MAX;
        int soldToday = -1;
        for(int price: arr){
            minVal = min(price, minVal);
            soldToday = price-minVal;
            result = max(result, soldToday);
        }     
        cout<<result;
    
}