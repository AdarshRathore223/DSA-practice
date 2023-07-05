#include <iostream>
using namespace std;
int main()
{
    int num, temp;
    cin >> num;
    for (int i = 0; i < num; i++)
    {
        temp = i+1;
        for (int j = 0; j < num; j++)
        {
            if (i<j)
            {
                temp++;
            }
            cout << temp << " ";
        }
        cout << "\n";
    }
}