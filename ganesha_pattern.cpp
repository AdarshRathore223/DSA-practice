#include <iostream>
using namespace std;
int main()
{
    int num;
    cin >> num;
    int mid = num / 2;
    for (int i = 0; i < num; i++)
    {
        for (int j = 0; j < num; j++)
        {
            if(i==0 && j>=mid){
                cout<<"*";
            }
            else if(i<=mid && j==0){
                cout<<"*";  
            }
            else if(i==num-1 && j<=mid){
                cout<<"*";
            }
            else if(i>=mid && j==num-1){
                cout<<"*";
            }
            else if ( j== mid || i== mid)
            {
                cout << "*";
            }
            else
            {
                cout << " ";
            }
        }
        cout << "\n";
    }
}