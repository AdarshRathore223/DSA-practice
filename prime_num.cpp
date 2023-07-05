#include <iostream>
using namespace std;
int main()
{
    long long num;
    cin >> num;
    bool primeflag = true;
    for (int k = 2; k <= num; k++)
    {primeflag=true;
        for (int i = 2; i < k; i++)
        {
            if (k % i == 0)
            {
                primeflag = false;
            }
        }
        if (primeflag)
        {
            cout << k << "\n";
        }
    }
}