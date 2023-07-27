#include <iostream>
#include <climits>
using namespace std;
int main()
{
    int num, gretest = INT_MIN;
    cin >> num;
    int arr[num];
    for (int j = 0; j < num; j++)
    {
        cin >> arr[j];
        if (gretest < arr[j])
        {
            gretest = arr[j];
        }
    }

    cout << gretest;
}