#include <iostream>
#include<math.h> 
using namespace std;
void isarmstrong(int num){
    int last,sum=0,temp=num;
    int count=(num==0)?1:log10(num)+1;
    while(num!=0){
        last = num % 10;
        num /= 10;
        sum+= pow(last, count);
    }
    if (sum=temp){
        cout<< "true";
    }
    else{
        cout<< "false";
    }

}
int main(){
    int num;
    cin>>num;
    isarmstrong(num);

}
