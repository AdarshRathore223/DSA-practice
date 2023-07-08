#include <iostream>
using namespace std;
long long DigitSum(long long temp)
{
    int digitsum = 0;
    int remainder;
    while (temp != 0)
    {
        remainder = temp % 10;
        digitsum += remainder;
        temp /= 10;
        // cout<<"------------"<<digitsum<<"----"<<temp;
    }
    cout<<"\n";
    return digitsum;
}
int main()
{
    long long num, sum = 0;
    cin >> num;
    long long temp = num;
    long long i = 1;

    while (num != 1)
    {
        i++;
        if (num % i == 0)
        {
            sum += DigitSum(i);

            num /= i;
            i = 1;
        }
    }
    long long digitsum = DigitSum(temp);
    // cout<<sum<<" "<< digitsum;
    if(sum == digitsum){
        cout<<"1";

    }
    else{
        cout<<"0";
    }
}