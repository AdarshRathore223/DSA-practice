#include <iostream>
using namespace std;
int main()
{
    int num, first_number = 0;
    cin >> num;
    int i = 1;
    int even = 0, odd = 0;
    while (num != 0)
    {
        first_number = num % 10;
        num /= 10;
        if (i % 2 == 0)
        {
            even += first_number;
        }
        else
        {
            odd += first_number;
        }
        i++;
    }
    cout<<odd<<"\n";
    cout<<even;
}