#include <iostream>
#include  <climits>
using namespace std;

int main()
{   
    int test;
    cin>>test;
    for (int a = 0; a < test; a++)
    {
        int num;
        cin >> num;
        int arr[num];
        int val1,val2;

        for (int i = 0; i < num; i++)
        {
            cin >> arr[i];
        }
        int sum,min=INT_MAX;
        cin >> sum;
        for (int i = 0; i < num - 1; i++)
        {
            for (int j = 0; j < num - 1; j++)
            {
                if (*(arr + j) > arr[j + 1])
                {
                    swap(*(arr + j), arr[j + 1]);
                }
            }
        }
        for (int num1 = 0; num1 < num; num1++)
        {
            for (int num2 = num1 + 1; num2 < num; num2++)
            {

                if (arr[num1] + arr[num2] == sum)
                {
                    if(arr[num2]-arr[num1]<min){
                        val1=num1;
                        val2=num2;
                        min=arr[num2]-arr[num1];
                    }
                }
            }
        }
    cout<<"Deepak should buy roses whose prices are" <<arr[val1]<<" and "<<arr[val2]<<"\n";
    }
}