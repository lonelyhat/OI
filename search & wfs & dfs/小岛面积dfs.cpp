//Area of island - dfs
#include <iostream>
using namespace std;
int a[101][101];
int book[101][101]={0};
int n, m,sum;
void dfs(int x, int y){
	int tx,ty;
	int next[4][2]={{0,1},{1,0},{0,-1},{-1,0}};
	for(int k=0;k<4;k++){
		tx= x+next[k][0];
		ty= y+next[k][1];
		if (tx<1||tx>n||ty<1||ty>m){
			continue;
		}
		if (a[tx][ty]>0&&book[tx][ty]==0){
			sum++;
			book[tx][ty]=1;
			dfs(tx,ty);
		}
	}
	return;
}
int main(){
	int i,j;
	cin>>n>>m;
	for(i=1;i<=n;i++){
		for(j=1;j<=m;j++){
			cin>>a[i][j];
		}
	}
	int startx,starty;
	cin>>startx>>starty;
	book[startx][starty]=1;
	sum = 1;
	dfs(startx,starty);
	cout<<sum;
}
