#include <iostream>
using namespace std;
int p=0, q=0,minimum=99999999,n=0,m=0;
int a[51][51],book[51][51]; 
int next[4][2]={{0,1},{1,0},{0,-1},{-1,0}};
void dfsmap(int x, int y, int step){
	//判断当前点是否为终点 
	if(x==p && y==q){
		//判断当前步数是否最优 
		if(step<minimum){
			minimum=step;     //录入最优步数 
		}
		return;
	}
	int k=0;
	int tx, ty;
	//模拟向右或下方向探路 
	for(k=0;k<=3;k++){
		tx=x+next[k][0];   //当前坐标加上要走的步数 
		ty=y+next[k][1];
		//判断是否越界 
		if(tx<1||tx>n||ty<1||ty>m){
			continue;
		}
		//判断该点是否为障碍物或者已在已走路径中（没有回头路）  
		if(a[tx][ty]==0 && book[tx][ty]==0){
			book[tx][ty]=1;         //标记为已走过 
			dfsmap(tx,ty,step+1);   //模拟下一步 
			book[tx][ty]=0;         //尝试结束，取消标记 
		}
	}
	return;
} 
int main(){
	int i, j ,startx, starty;
	scanf("%d %d",&n,&m);
	//创建地图 
	for(i=1;i<=n;i++){
		for(j=1;j<=n;j++){
			scanf("%d", &a[i][j]);
		}
	}
	//输入起点与终点坐标 
	scanf("%d %d %d %d", &startx, &starty,&p,&q);
	book[startx][starty]=1;
	dfsmap(startx,starty,0);
	printf ("%d",minimum);
	return 0;
}
