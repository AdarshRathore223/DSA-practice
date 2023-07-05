#include <iostream>
using namespace std;
int main()
{
    long long num;
    cin >> num;
    for (long long i = 2; i < num; i++)
    {
        if (num % i == 0)
        {
            cout << "Not Prime";
            break;
        }
        else
        {
            cout << "Prime";
            break;
        }
    }
}