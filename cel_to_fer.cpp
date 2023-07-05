#include <iostream>
using namespace std;
int main(){
    int min,max,jump,ferenite;
    cin>>min;
    cin>>max;
    cin>>jump;
    for(int i=min;i<=max;i+=jump){
        ferenite=(i-32)*(0.55);
        cout<<i<<" "<<ferenite<<"\n";
    }
}