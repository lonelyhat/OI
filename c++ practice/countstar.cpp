#include <bits/stdc++.h>
using namespace std;
int main() {
    int w,h,c=0;
    cin>>w>>h;
    char a[1000][1000];
    int i,j,m,n;
    for(i=0;i<h;i++){
        for(j=0;j<w;j++){
            cin>>a[j][i];
        }
    }
    for(m=0;m<h;m++){
        for(n=0;n<w;n++){
        	if(a[m][n]=='*'){
            if((a[m][n+1]=='*')||(a[m+1][n]=='*')||(a[m][n-1]=='*')||(a[m-1][n]=='*')){
            c=c;
            }
            else
            c++;
        }
    }}
    cout<<c;
}
