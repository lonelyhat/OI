#include <bits/stdc++.h>
using namespace std;
int main() {
    int h,w,n;
    cin>>h>>w>>n;
    char a[1000][1000];
    for(int j=0;j<h;j++){
        for(int k=0;k<w;k++){
            a[j][k]='O';
        }
    }
    int count=n/w;
    for(int j=0;j<=count;j++){
        for(int k=0;k<n-w*j;k++){
            a[j][k]='X';
        }
    }
    for(int x=0;x<h;x++){
        for(int y=0;y<w;y++){
            cout<<a[x][y];
        }
        cout<<endl;
    }
    
}
