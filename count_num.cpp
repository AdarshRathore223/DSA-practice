#include <iostream>
using namespace std;
int countnum(int digit,int num){
    int count=0;
    int remainder;
	while (digit != 0) {
    remainder = digit % 10;
    if(remainder==num){
        count++;
    }
    digit /= 10;
  }
  return count;
}
int main(){
    long long digit;
    int num,count=0;
    cin>>digit;
    cin>>num;
    count=countnum(digit,num);
    cout<<count;

}