
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int num, space = 0;
    cin >> num;
    int mid = (num+1) / 2;
    for (int i = 0; i < mid; i++)
    {

        for (int j = 0; j < mid - i; j++)
        {
            if (i == 0  && j == 0)
            {
                continue;
            }
            else
            {
                cout << "* ";
            }
        }

        for (int j = 0; j < space; j++)
        {
            cout << "  ";
        }
        space += i + 1;

        for (int j = 0; j < mid - i; j++)
        {
            cout << "* ";
        }

        cout << "\n";
    }
    space = 1;
    for (int i = 0; i < mid - 1; i++)
    {
        for (int j = 0; j < i + 2; j++)
        {
            cout << "* ";
        }
        for (int j = space; j > 0; j--)
        {
            cout << "  ";
        }
        space -= i + 1;
        
        for (int j = 0; j < i + 2; j++)
        {
            if (i == 1 && j == 1)
            {
                continue;
            }
            else
            {
                cout << "* ";
            }
        }

        cout << "\n";
    }
}
