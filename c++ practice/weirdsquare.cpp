#include <bits/stdc++.h>
using namespace std;
int main() {
    int n;
    cin>>n;
    int a[200][200];
    
    for(int i=0;i<=n+1;i++){
    	for(int j=0;j<=n+1;j++){
    		a[i][j]=-1;
		}
	}
	a[1][1]=1;
    for(int i=3;i<=n;i=i+2){
    	int sum=0; 
    	for(int j=i;j>0;j--){
		sum=sum+j;
		}
		a[1][i]=sum;
	}
    for(int i=2;i<=n;i=i+2){
    	a[1][i]=a[1][i-1]+1;
	}
	
	if(n%2==0){
	for(int k=2;k<=n;k++){
		if(k%2==0){
				for(int l=1;l<n;l=l+2){
			a[k][l]=a[k-1][l+1]+1;
		}
		for(int m=2;m<n;m=m+2){
			a[k][m]=a[k-1][m+1]-1;
		} 
		a[k][n]=a[k-1][n]+2*(n-k+1);
		}
		else{
		for(int l=1;l<n;l=l+2){
			a[k][l]=a[k-1][l+1]-1;
		}
		for(int m=2;m<n;m=m+2){
			a[k][m]=a[k-1][m+1]+1;
		} 
		a[k][n]=a[k-1][n]+1;
		} 
	}
}
	
	else{
	for(int k=2;k<=n;k++){
		if(k%2==0){	
		for(int l=1;l<n;l=l+2){
			a[k][l]=a[k-1][l+1]+1;
		}
		for(int m=2;m<n;m=m+2){
			a[k][m]=a[k-1][m+1]-1;
		} 
		a[k][n]=a[k-1][n]+1;
	}
	else{
		for(int l=1;l<=n;l=l+2){
			a[k][l]=a[k-1][l+1]-1;
		}
		for(int m=2;m<=n;m=m+2){
			a[k][m]=a[k-1][m+1]+1;
		} 
		a[k][n]=a[k-1][n]+2*(n-k+1); 
	}
	}
}
		
	for(int x=1;x<=n;x++){
		for(int y=1;y<=n;y++){
			if(a[x][y+1]!=-1){
				cout<<a[x][y]<<" ";
			}
			else if (a[x][y+1]==-1){
				cout<<a[x][y];
			}
		}
		cout<<endl;
	}
}

    
