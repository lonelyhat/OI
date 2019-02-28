#include <bits/stdc++.h>
using namespace std;
const int MAXN=10000;
int main() {
    int n;
    int s;
    int a[MAXN];
	cin>>n>>s;
	for(int i=0;i<n;i++){
		a[i]=i;
	}
	for(int i=0;i<s;i++){
		int j,k;
		cin>>j>>k;
		int tmp;
		tmp=a[j];
		a[j]=a[k];
		a[k]=tmp;
	}
	for(int i=0; i<n; i++){
		cout<<a[i]<<endl;
	}  
}
