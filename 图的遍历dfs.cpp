#include<iostream>
using namespace std;
int e[100][100];
int book[100]={0};
int n,sum=0;
void dfs(int cur){
	cout<<cur<<" ";
	sum++;
	if(sum==n){
		return;
	}
	for(int i = 1;i<=n;i++){
		if(e[cur][i]==1&&book[i]==0){
			book[i]=1;
			dfs(i);
		}
	}
}
int main(){
	int i,j,m,a,b;
	cin>>n>>m;
	for(i=1;i<=n;i++){
		for(j=1;j<=n;j++){
			if(i==j) 
				e[i][j]=0;
			else 
				e[i][j]=-1;
		}
	}
	for(i=1;i<=m;i++){
		cin>>a>>b;
		e[a][b]=1;
		e[b][a]=1;
	}
	book[1]=1;
	dfs(1);
	return 0;	
} 
