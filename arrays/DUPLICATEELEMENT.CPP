#include <iostream>
using namespace std;
int main()
{
    int num;
    cin >> num;
    int arr[num];
    bool duplicate = false;
    for (int i = 0; i < num; i++)
    {
        cin >> arr[i];
    }
    for (int i = 0; i < num; i++)
    {
        for (int j = 0; j < num; j++)
        {
            if(arr[i]==arr[j]){
                duplicate=true;
                break;
            }
        }
        if(duplicate){
            break;
        }
    }
    if(duplicate==true){
        cout<<"true";
    }else{
        cout<<"false";
    }
}