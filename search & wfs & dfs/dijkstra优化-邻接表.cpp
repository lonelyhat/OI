//用邻接表实现dijkstra算法 
#include <iostream>
using namespace std;
const int inf=999999;
int main(){
	int i,j,k,min,min_u;
	//参量，无实际意义 
	
	int book[101];
	//检查对于从1号点到某一点是否已是最短路径 
	
	int n,m;
	cin>>n>>m;
	//n个节点，m条边 
	
	int u[100],v[100],w[100]; 
	//u[],v[],w[] -> 从u[i]节点到v[i]节点距离为w[i]
	
	
	//初始化 
	int first[101],next[101];
	for( i=1;i<=n;i++){
		first[i]=-1; 
	} 
	
	for(i=1;i<=n;i++){
		book[i]=0;
	}
	
	//核心：建立邻接表 
	for( i=1;i<=m;i++){
		cin>>u[i]>>v[i]>>w[i];
		next[i]=first[u[i]];    //i=1时，next[i]指向-1；i!=1时，next[i]会记录当前first[u[i]]中的次序 
		first[u[i]]=i;          //first[u[i]]中记录的是新的一条边的次序（e.g第几条边）
	}
	//最终形成的邻接表中，first[]代表的是各个点所直接对应的边（从后往前），next[]代表的是同一点相连的所有边数 
	//e.g:first[1]:一号节点最后输入的相连边；next[first[1]]:在最后一边的前一个边 
	
	 
	//dijkstra: 
	int dis[101];
	dis[1]=0; 
	book[i]=1;//已确定一号点到自身为最短路径 
	for(i=2; i<=n;i++){
		dis[i]=inf;
	}
	//初始化dis数组 for 1号节点 
	k=first[1];
	//遍历一号节点相连点的距离并记录 
	while(k!=-1){
		dis[v[k]]=w[k]; 
		k=next[k];
	}
	
	//核心：每次找到离1号点最近距离点，以此为中转点，更新最近值 

	for(i=1;i<=n;i++) {
		min=inf;
		for(j=1;j<=n;j++){
			if(book[j]==0 && dis[j]<min){
				min=dis[j];
				min_u=j;
			}
		}
		book[min_u]=1;
		k=first[min_u];
		while (k!=0){
			if (dis[v[k]]>dis[u[k]]+w[k])
				dis[v[k]]=dis[u[k]]+w[k];
			k=next[k]; //很重要，不然就是死循环 
		}
	}
	for(i=1;i<=n;i++){
		cout<<dis[i]<<" ";
	} 
}
	 
