#include <bits/stdc++.h>
#include <algorithm>
using namespace std;
int main()
{
    int n,k,j=0,sum=0;
    cin>>n;
    int a[n];
    k=n;
    for(int i=0; i<n;i++){
        cin>>a[i];
    }
    sort(a,a+n);
    for(int i=0;i<n;i++){
        sum=sum+a[i];
    }
    while(k>=4){
        sum=sum-a[j];
        j++;
        k=k-4;
    }
    cout<<sum;
}
