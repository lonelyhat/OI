//Bellman-Ford:�����Ȩ�ߣ�������������Ϊ���� ��Ԫ���·������ 
#include<iostream>
using namespace std;
int main(){
	int i,j;
	int inf=999999;
	//���� 
	int n,m;
	//n���ڵ㣬m���� 
	int u[101],v[101],w[101];
	int dis[101];
	for(i=1;i<=n;i++){
		dis[i]=inf;
	} 
	dis[1]=0;
	cin>>n>>m;
	for(i=1;i<=m;i++){
		cin>>u[i]>>v[i]>>w[i];
	} 
	
	for(j=1;j<=n-1;j++){
		for(i=1;i<=m;i++){
			if(dis[v[i]]>dis[u[i]]+w[i])
				dis[v[i]]=dis[u[i]]+w[i];
		}
	}
	
	for(i=1;i<=n;i++){
		cout<<dis[i]<<" ";
	}
}
