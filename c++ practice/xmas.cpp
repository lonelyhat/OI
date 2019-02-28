#include <bits/stdc++.h>
using namespace std;
int main() {
    int n;
    cin>>n;
    int a[20000];
    int b[20000];
    for(int i=1; i<n+1; i++){
        cin>>a[i];
    }
    for(int i=1; i<n+1; i++){
        for(int j=1; j<n+1;j++){
            if(a[j]==i){
                b[i]=j;
            }
        }
        } 
    for(int i=1; i<n+1;i++){
        cout<<b[i]<<endl;
    }    
}
 
