#include <bits/stdc++.h>
int a[51][51]={0};
int book[51][51]={0};
int n,m; 
int mininum=9999999;
int result=0; 

using namespace std;
void dfs(int x,int y,int step,int tmp){
	int next[3][2]={{0,1},{1,0},{0,-1}};
	int tx,ty,k;
	if(x==n&&y==m)
	{
		if(step<mininum){
			mininum=step;
		}
		if(tmp>result){
			result=tmp;
		}
		return;
	}
	
	for(k=0;k<=3;k++){
		tx=x+next[k][0];
		ty=y+next[k][1];
		if(tx<1||tx>n||ty<1||ty>m){
			continue;
		}
		if(a[tx][ty]!=-1&&book[tx][ty]==0){
			book[tx][ty]=1;
			dfs(tx,ty,step+1,tmp+a[tx][ty]);
			book[tx][ty]=0;
		}
	}
	return;
}
int main() {
    int i,j;
    cin>>n>>m;
    for(i=1;i<=n;i++){
    	for(j=1;j<=m;j++){
    		cin>>a[i][j];
		}
	}
	book[1][1]=1;
	dfs(1,1,0,0);
	cout<<mininum<<endl; 
	cout<<result;
	return 0;
}
