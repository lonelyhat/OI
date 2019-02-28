#include <bits/stdc++.h>
using namespace std;
int main() {
    int e,n;
    cin>>n>>e;
    int a[10000][10000];
    for(int i=0;i<=10000;i++){
    	for(int j=0;j<=10000;j++){
		a[i][j]=-1;
	} 
	}
    for(int i=1;i<n+1;i++){
    	a[i][0]=i;	
	}
	for(int i=1;i<e+1;i++){
	int x,y;
	cin>>x>>y;
	a[x][i]=y;
	a[y][i]=x;
}
    for(int j=1;j<=e;j++){
    	for(int k=1;k<=5;k++){
    		if(a[j][k]!=-1){
    			cout<<a[j][k]<<" ";
			}
			else 
			break; 			
		}
	cout<<endl;
}
}

