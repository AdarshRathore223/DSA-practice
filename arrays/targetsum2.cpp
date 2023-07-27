#include <iostream>
using namespace std;

int main()
{
    int num;
    cin >> num;
    int arr[num];

    for (int i = 0; i < num; i++)
    {
        cin >> arr[i];
    }
    int sum;
    cin>>sum;
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
                cout << arr[num1] << " and " << arr[num2] << "\n";
            }
           
        }
    }
}