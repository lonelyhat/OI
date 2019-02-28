#include <bits/stdc++.h>
using namespace std;
const int MAXN=500;
int main() {
    int h,w,ct=0;
    char a[MAXN][MAXN];
    cin>>h>>w;
    for(int j=0;j<h;j++){
        for(int k=0;k<w;k++){
            cin>>a[j][k];
        }
    }
    for(int j=0;j<h;j++){
        for(int k=0;k<w;k++){
            if(a[j][k]=='#'){
                ct++;
            }
        }
    }
    cout<<ct;
}
