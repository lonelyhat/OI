#include <bits/stdc++.h>
#include <algorithm>
const int MAXN=100000;
using namespace std;
void sort(int N, long s[]){
	for(int j=0;j<N;j++){
		for(int k=0;k<N;k++){
			if(s[k]>s[k+1]){
				int tmp=s[k];
				s[k]=s[k]+1;
				s[k+1]=tmp;
			}
		}
	}
}
int main() {
    int n;
    cin>>n;
    long a[MAXN],b[MAXN];
    for(int i=0;i<n;i++){
        cin>>a[i];
        cin>>b[i];
    }
    sort(n,a);
    sort(n,b);
    cout<<(a[0]+a[n-1])/2<<" "<<(b[0]+b[n-1])/2;
}
