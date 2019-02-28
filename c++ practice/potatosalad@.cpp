#include <bits/stdc++.h>
#include <algorithm>
const int MAXN=1000;
using namespace std;
int main() {
    int n,d;
    int ar[MAXN];
    cin>>n>>d;
    for(int i=0; i<n; i++){
        cin>>ar[i];
    }
    sort(ar, ar+n);
    int sum=0;
    for(int i=n-1; i>n-d-1; i--){
    	sum=sum+ar[i];
	}
    cout<<sum;;
}
