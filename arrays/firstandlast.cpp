#include <iostream>
using namespace std;
int main()
{
    int size;
    cin >> size;
    long long int arr[size];
    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }
    long long int num;
    int first = -1, last = -1;
    cin >> num;
    for (int i = 0; i < size; i++)
    {
        if (arr[i] == num)
        {
            first = i;
            for (int j = i; j < num; j++)
            {
                if (arr[j] == num)
                {
                    last = j;
                }
            }
            break;
        }
    }

    cout << first << " " << last;
}