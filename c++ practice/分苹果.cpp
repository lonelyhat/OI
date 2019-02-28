#include <iostream>
using namespace std;
int apple(int m,int n){
	if(m<=1||n<=1) return 1;
	if(m<n){
		return apple(m,m);
	}  
	else{
		return apple(m,n-1)+apple(m-n,n);
	}  
}
int main(){
	int a,p;
	cin>>a>>p;
	cout<<apple(a,p);
}
