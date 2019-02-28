#include <bits/stdc++.h>
using namespace std;
int main() {
    int h,w;
    cin>>h>>w;
    char a[1000][1000];
    for(int i=0;i<h;i++){
        for(int j=0;j<w;j++){
            a[i][j]=' ';
        }
    }
    for(int i=0;i<h;i++){
        if(i+w-(h-1)/2<w){
            for(int j=i;j<i+w-(h-1)/2;j++){
                a[i][j]='*';
            }
        }
        else{
            for(int k=w-i+(h+1)/2-2;k>-i-1+(h-1);k--){
                a[i][k]='*';
            }
        }
    }
    for(int i=0;i<h-1;i++){
        for(int j=0;j<w;j++){
        cout<<a[i][j]; 
        }
        cout<<endl;
    }
    for(int s=0;s<w;s++){
    	cout<<a[h-1][s];
	}
}
