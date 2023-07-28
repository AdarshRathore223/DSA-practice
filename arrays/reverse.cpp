#include <iostream>
#include <climits>
using namespace std;

int main()
{
	int num, arrnum;
	cin >> num;
	int arr[num],inv[num];
	for (int i = 0; i < num; i++)
	{
		cin >> arr[i];
	}

	for (int i = 0; i < num; i++)
	{
		int pos = arr[i];
		inv[pos] = i;
	}

	for (int i = 0; i < num; i++)
	{
		cout << inv[i] << " ";
	}
}
