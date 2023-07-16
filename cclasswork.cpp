#include <iostream>
using namespace std;
int main(){
    int num;
    cin>>num;

    for(int i=0;i<num;i++){
        for(int j=0;j<=i;j++){
            cout<<"*";
        }
        cout<<" ";
        for(int j=0;j<num-i;j++){
            cout<<"*";
        }
        cout<<" ";
        for(int j=0;j<num-i;j++){
            cout<<"*";
        }
        cout<<" ";
        for(int j=0;j<=i;j++){
            cout<<"*";
        }
        cout<<"\n";
    }    

}



// for(int i = 0; i<num;i++){
//         for(int j=0;j<=(num*2)-2;j++ )
//         {
//             if(i == j-1){
//                 cout<<" ";
//             }
//             else{
//                 cout<<"*";
//             }
//         }
//         cout<<" ";
//         for(int j=0;j<=(num*2)-2;j++ )
//         {
//             if(i == num-j){
//                 cout<<" ";
//             }
//             else{
//                 cout<<"*";
//             }
//         }
//         cout<<"\n";
//     }