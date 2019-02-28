#include <bits/stdc++.h>
#include <algorithm>
using namespace std;
int main() {
    int n,s;
    int sum=0.0;
    double a[10000];
    cin>>n>>s;
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    sort(a,a+n);
    for(int j=n-1;j>=n-s;j--){
        a[j]=a[j]/2.0;
    }
    for(int k=0; k<n;k++){
        sum=a[k]*2.0+sum;
    }
    cout<<sum;

