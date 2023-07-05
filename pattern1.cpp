#include <iostream>
using namespace std;

int main()
{
    int i, j,x = 0;
    int n;
    cin >> n;
    for(int i=0;i<n;i++){
        for(int j=0;j<=i;j++){
            if(i==0 && j==0){
                cout<<"1";
            }
            else if (j==0 || i==j){
                cout<<i;
            }
            else{
                cout<<"0";
            }
        }
        cout<<"\n";
    }
    return 0;
}
