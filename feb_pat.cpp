#include <iostream>
using namespace std;
int main()
{
    int num,index=0;
    cin >> num;
    int arr[(num*(num+1))/2];
    arr[0]=0,arr[1]=1;

    for (int i = 0; i < num; i++)
    {
        for (int j = 0; j <= i; j++)
        {
         
         cout<<arr[index]<<"\t";
         arr[index+2]=arr[index+1]+arr[index]; 
         index++;  
        }
        cout << "\n";
    }
    return 0;
}