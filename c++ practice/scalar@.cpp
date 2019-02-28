#include <bits/stdc++.h>
using namespace std;
void arr(int m, int a[]){
    for(int j=0; j<m-1; j++){
        for(int k=0; k<m-1; k++){
            if(a[k]>a[k+1]){
                int tmp;
                tmp=a[k+1];
                a[k+1]=a[k];
                a[k]=tmp;
            }
        }
    }
}
int main() {
    int n;
    cin>>n;
    int x[800];
    int y[800];
    int i,sum=0;
    for(i=0; i<n; i++){
        cin>>x[i];
    }
    for(i=0; i<n; i++){
        cin>>y[i];
    }
    arr(n,x);
    arr(n,y);
    for(int s=0; s<n; s++){
        sum=sum+x[s]*y[n-1-s];
    }
    cout<<sum;
    return 0;
}
