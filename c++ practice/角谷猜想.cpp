#include <iostream>
using namespace std;
void output(int n){
	if(n==1){
		cout<<"End";
		return;
	}
	else{
		if(n%2==0){
			cout<<n<<"/"<<2<<"="<<n/2<<endl;
			n=n/2;
		}
		else{
			cout<<n<<"*"<<3<<"+"<<1<<"="<<n*3+1<<endl;
			n=3*n+1;
		}
		output(n); 
	}
}
int main(){
	int n;
	cin>>n;
	output(n);
	return 0;
} 
