#include <bits/stdc++.h>
using namespace std;
const int MAXN=100000; 
int main() {
    int n,k,c=0;
    int a[MAXN];
    cin>>n>>k;
    for(int i=0; i<n;i++){
    	cin>>a[i];
	}
	for(int j=1; j<n;j++){
		if((a[j-1]-a[j])>=k){
			c++;
		}	
	}
	cout<<c;
}

