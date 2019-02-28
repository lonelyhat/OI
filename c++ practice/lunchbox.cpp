#include <bits/stdc++.h>
using namespace std;
const int MAXN=60000;
int sort(int N, int M,int A[]){
    long long sum=0;
    int k=0;
    sort(A,A+M);
    for(int i=0;i<M;i++){
            sum=A[i]+sum;
            if(sum<=N){
            	k++;    	
			}
    }
    return k;
}
int main() {
    int n,m;
    int a[MAXN];
    cin>>n>>m;
    for(int i=0;i<m;i++){
        cin>>a[i];
    }
    cout<<sort(n,m,a);
    return 0;
} 
