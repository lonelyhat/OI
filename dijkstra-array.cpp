//Dijkstra算法的数组实现：单源最短路算法（即从一个指定原点到达其余各个顶点的最短路径）
//此方法只适用于有向图 
#include <iostream>
using namespace std;
int main() {
	int e[101][101];
	int inf=999999;
	int min=inf,u,v;
	int p1,p2,d;
	int dis[101];
	int book[101]; 
	int m,n;
	cin>>m>>n;

//初始化e数组 
	int i,j;
	for(i=1;i<=m;i++){
		for(j=1;j<=m;j++){
			if(i==j){
				e[i][j]=0;
			}
			else
				e[i][j]=inf;
		}
	}
	
//输入	
	for(i=1;i<=n;i++){
		cin>>p1>>p2>>d;
		e[p1][p2]=d;
	}

//初始化dis数组 ，此处可以加一个大for循环，就可以实现从1到m所有节点到达任意节点的最短路径 
	for(i=1;i<=m;i++){
		dis[i]=e[1][i];
	}
	
//初始化book数组 
	for(i=1;i<=m;i++){
		book[i]=0;
	}
	book[1]=1;

//核心算法
	for(i=1;i<=m-1;i++){
		//找到离一号点最近的点 
		min=inf;
		for(j=1;j<=m;j++){
			if(book[j]==0&&dis[j]<min){
				min=dis[j];
				u=j;
			}
		}
		//找到后则可以确定这个点为已知，是离一号点现在最近的点，做标记后下一次循环时将会跳过这个点，因为已经是最短的了，要找下一个第二短的。 
		book[u]=1;
		//尝试寻找通过最近点作为中转点所能到达的顶点 
		for(v=1;v<=m;v++){
			if(e[u][v]<inf){ //如果最近点可到达v号点 
				if(dis[v]>dis[u]+e[u][v]) 
				//若一号点离v号点距离大于从一号点到当前离一号最近点加上从最近点到v号点距离 
					dis[v]=dis[u]+e[u][v];
					//更新当前状态下1号点到达v号点的最短距离，其结果为已知点皆可为中转点情况下的最短距离 
			} 
		} 	
	} 
	
	for(i=1;i<=m;i++){
		printf("%5d",dis[i]);
	}
	
	return 0;
}
