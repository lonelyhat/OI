//floyd-warshall:多源最短路径问题。O(n^3)复杂度 
#include <iostream>
using namespace std; 
int main() {
	int e[101][101];   //创建节点网络，用数组代表顶点之间边的关系 
	int inf=999999;    
	int m,n;
	cin>>m>>n;
//初始化 
	for(int i=1;i<=m;i++)
		for(int j=1;j<=m;j++)
			if(i==j)
			e[i][j]=0; 
			else
			e[i][j]=inf;
			
//输入 
	for(int i=1;i<=n;i++){
		int p1,p2,d;
		cin>>p1>>p2>>d;
		e[p1][p2]=d;
	}
	int i,j,k;
	
//核心算法部分 
	for (k=1;k<=m;k++)
		for(i=1;i<=m;i++)
			for(j=1;j<=m;j++)
				if (e[i][j]>e[i][k]+e[k][j])    //注意是e[i][k]和e[k][j],因为是以k号点作为中转，顺序应为从i到k再到j 
					e[i][j]=e[i][k]+e[k][j]; 
	//每次循环都会刷新一遍数组，刷新后的数组存储为为已有中转点后的最短路径，直到所有点都成为已有中转点时结束 
	//例：当k为3时，表示此时数组存储的值为1、2、3都可为中转点时的最短路径 
//输出结果 
	for(i=1;i<=m;i++){ 
		for(j=1;j<=m;j++)
			printf("%10d",e[i][j]); 
		cout<<endl; 
	} 
}
