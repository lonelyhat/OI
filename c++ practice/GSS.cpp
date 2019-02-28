#include <bits/stdc++.h>
using namespace std;
int main() {
    int n;
    int k; 
    int a[100];
    int sum=0;
    cin>>n;
    k=n;
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    sort(a,a+n);
    for(int j=0;j<n;j++){
        sum=sum+a[j];
    }
    while(k>0){
        k=k-4;
    	sum=sum-a[k];
	}
    cout<<sum;
}
