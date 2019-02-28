#include <bits/stdc++.h>
using namespace std;
int main() {
    int n,i;
	cin>>n;
	for(i=0;i<2*n-1;i++){
		if(i<n){
		for(int k=n-i-1;k>0;k--){
			cout<<" ";
		} 
		for(int j=0;j<n+i*2;j++){
			cout<<"x";
		}
		cout<<endl; 
		}
		else{
		for(int k=0;k<1+i-n;k++){
			cout<<" ";
		}
		for(int j=5*n-4-2*i;j>0;j--){
			cout<<"x";
		}
		cout<<endl;
		}
	}
}
