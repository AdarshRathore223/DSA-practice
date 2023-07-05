// #include <iostream>
// using namespace std;
// int main(){
//     int n,patnum=1,count=0;
//     cin>>n;
//     for(int i=n;i>=0;i--){
//         for(int j=0;j<i;j++){
//             patnum=1;
//             if(j==i-1){
//                 cout<<" "<<patnum;
//                 for(int k=0;k<count;k++){
//                     patnum++;
//                     cout<<patnum<<" ";
//                 }
//             }
//             else{
//                 cout<<" ";
//             }
//         }
//         cout<<"\n";
//         count+=2;
//     }
// }

#include <iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int temp=n;
    for(int i=1;i<=n*2;i=i+2){
            int patnum=i/2+1;
            for(int k=temp-1;k>0;k--){
                cout<<"\t";
            }
            for(int j=1;j<=i*2;j=j+2){
                if(j<i){
                    cout<<patnum++<<"\t";
                }
                else{
                    cout<<patnum--<<"\t";
                }
            }
           
        cout<<"\n";
        temp--;
    }
}