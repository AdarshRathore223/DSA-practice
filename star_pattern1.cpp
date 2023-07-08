
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int num, space = 0;
    cin >> num;
    int mid = (num + 1) / 2;
    for (int i = 0; i < mid; i++)
    {

        for (int j = 0; j < mid - i; j++)
        {

            if (i == 0 && j == 0)
            {
                continue;
            }
            else
            {
                cout << "*\t";
            }
        }

        for (int j = 1; j < space; j++)
        {
            cout << " \t";
        }
        space += 2;

        for (int j = 0; j < mid - i; j++)
        {
            cout << "*\t";
        }

        cout << " \t";
    }
    space -= 4;
    for (int i = 0; i < mid - 1; i++)
    {
        for (int j = 0; j < i + 2; j++)
        {
            cout << "*\t";
        }
        for (int j = space - 1; j > 0; j--)
        {
            cout << " \t";
        }
        space -= 2;

        for (int j = 0; j <= i + 1; j++)
        {
            if (i == mid-2 && j == 0)
            {
                continue;
            }
            else
            {
                cout << "*\t";
            }
        }

        cout << "\\t";
    }
}
