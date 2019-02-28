#include <bits/stdc++.h>
using namespace std;
const int size=100;
int main() {
    int e,n;
    cin>>n>>e;
    int a[size][size];
    int b[size];
    for(int i=0;i<n+1;i++){
    	for(int u=0;u<n+1;u++){
		a[i][u]=-1;
	} 
	}
    for(int in=1;in<n+1;in++){
    	a[in][0]=in;	 
	}
	for(int c=1;c<n+1;c++){
		b[c]=1;
	}
	for(int r=1;r<e+1;r++){
	int x,y;
	int tx,ty;
	cin>>x>>y;
	tx=b[x];
	ty=b[y];
	a[x][tx]=y;
	a[y][ty]=x;
	b[x]=tx+1;
	b[y]=ty+1;
	
}
    for(int f=1;f<n+1;f++){
        if(a[f][1]!=-1){
            for(int g=1;g<n+1;g++){
    		if(a[f][g]!=-1){
    			if(a[f][g+1]!=-1) 
    			cout<<a[f][g]<<" ";
    			else if(a[f][g+1]==-1)
    			cout<<a[f][g];
    			}
			else if(a[f][g]==-1){
				cout<<endl;
				break;
			} 
    		if(g==n){
    			    cout<<endl;
    			}
    		} 
		    } 
		else{
		cout<<endl;
		}
    }
}
    	

