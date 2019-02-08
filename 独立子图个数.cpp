/*求独立子图个数算法：floodfill*/
#include<iostream>
using namespace std;
int a[51][51];
int book[51][51]={0};
int n,m,sum;
void dfs(int x, int y, int color){
	int next[4][2]={{0,1},{1,0},{0,-1},{-1,0}};  //方向数组 
	int k,tx,ty;
	a[x][y]=color;              //第一次染色，值为-1
	for(k=0;k<=3;k++){
		tx=x+next[k][0];
		ty=y+next[k][1];
		if(tx<1||tx>n||ty<1||ty>m)
			continue;
		if(a[tx][ty]>0&&book[tx][ty]==0){   //当这个点没有被走过且被标记为岛屿时
			sum++;
			book[tx][ty]=1;       //当前点已走过 
			dfs(tx,ty,color);     //开始尝试下一个点 
		} 
	}
}
int main(){
	int i,j,num=0;
	scanf("%d %d", &n, &m);
	for(i=1;i<=n;i++){
		for(j=1;j<=m;j++){
			scanf("%d", &a[i][j]);
		}
	}
	
	for(i=1;i<=n;i++){
		for(j=1;j<=m;j++){
			if(a[i][j]>0){
				num--; //每发现一个岛屿则标号加1 
				book[i][j]=1;
				dfs(i,j,num); 
			}
		}
	}
	for(i=1;i<=n;i++){
		for(j=1;j<=m;j++){
			printf("%3d",a[i][j]);
		}
		printf("\n");
	}
	printf("有%d个小岛\n",-num);
	return 0;
} 
