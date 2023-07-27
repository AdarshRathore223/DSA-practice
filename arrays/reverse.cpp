#include <iostream>
#include <climits>
using namespace std;
int main()
{
	int num, arrnum;
	cin >> num;
	int arr[num];

	bool nullzero = true;
	for (int i = 0; i < num; i++)
	{
		cin >> arr[i];
	}
	int last = num - 1;

	for (int i = 0; i < num; i++)
	{
		if (arr[i] != 0 || !nullzero)
		{
			swap(arr[i], arr[last]);
			last--;
			if (i == last)
			{
				break;
			}
			nullzero = false;
		}
	}
	for (int i = 0; i < num; i++)
	{
		cout << arr[i] << " ";
	}
}
