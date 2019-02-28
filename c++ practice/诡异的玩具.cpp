#include <iostream>
#include <cmath>
#include <algorithm>
using namespace std;
int main(){
	int n=0;
	cin>>n;
	double t[1000];
	for(int j=0;j<n;j++){
		cin>>t[j];
	}
	int i=0;
	for( i=n-1;i>0;i--){
		sort(t,t+i+1);
		double a=t[i];
		double b=pow(t[i-1],2);
		double pro=a*b;
		double ans=cbrt(pro);
		t[i-1]=ans;
	} 
	cout<<t[0];
	return 0;
} 
