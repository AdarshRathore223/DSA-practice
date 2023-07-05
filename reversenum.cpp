#include<iostream>
using namespace std;

int reversenum(int n){
    int remainder,reverse=0;
	while (n != 0) {
    remainder = n % 10;
    reverse = reverse * 10 + remainder;
    n /= 10;
  }
  return reverse;
}
int main () {
	int n=0,sum=0;
	cin>>n;
	int num1[n],num2[n],ans[n];
	for(int i=0;i<n;i++){
		cin>>num1[i]>>num2[i];
		num1[i]=reversenum(num1[i]);
		num2[i]=reversenum(num2[i]);

	}
    for(int i=0;i<n;i++){
        sum=num1[i]+num2[i];
        ans[i]=reversenum(sum);

    }
    for(int i=0;i<n;i++){
        cout<<ans[i]<<"\n";
    }
	
	return 0;
}