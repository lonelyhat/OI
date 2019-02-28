//���ڽӱ�ʵ��dijkstra�㷨 
#include <iostream>
using namespace std;
const int inf=999999;
int main(){
	int i,j,k,min,min_u;
	//��������ʵ������ 
	
	int book[101];
	//�����ڴ�1�ŵ㵽ĳһ���Ƿ��������·�� 
	
	int n,m;
	cin>>n>>m;
	//n���ڵ㣬m���� 
	
	int u[100],v[100],w[100]; 
	//u[],v[],w[] -> ��u[i]�ڵ㵽v[i]�ڵ����Ϊw[i]
	
	
	//��ʼ�� 
	int first[101],next[101];
	for( i=1;i<=n;i++){
		first[i]=-1; 
	} 
	
	for(i=1;i<=n;i++){
		book[i]=0;
	}
	
	//���ģ������ڽӱ� 
	for( i=1;i<=m;i++){
		cin>>u[i]>>v[i]>>w[i];
		next[i]=first[u[i]];    //i=1ʱ��next[i]ָ��-1��i!=1ʱ��next[i]���¼��ǰfirst[u[i]]�еĴ��� 
		first[u[i]]=i;          //first[u[i]]�м�¼�����µ�һ���ߵĴ���e.g�ڼ����ߣ�
	}
	//�����γɵ��ڽӱ��У�first[]������Ǹ�������ֱ�Ӷ�Ӧ�ıߣ��Ӻ���ǰ����next[]�������ͬһ�����������б��� 
	//e.g:first[1]:һ�Žڵ��������������ߣ�next[first[1]]:�����һ�ߵ�ǰһ���� 
	
	 
	//dijkstra: 
	int dis[101];
	dis[1]=0; 
	book[i]=1;//��ȷ��һ�ŵ㵽����Ϊ���·�� 
	for(i=2; i<=n;i++){
		dis[i]=inf;
	}
	//��ʼ��dis���� for 1�Žڵ� 
	k=first[1];
	//����һ�Žڵ�������ľ��벢��¼ 
	while(k!=-1){
		dis[v[k]]=w[k]; 
		k=next[k];
	}
	
	//���ģ�ÿ���ҵ���1�ŵ��������㣬�Դ�Ϊ��ת�㣬�������ֵ 

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
			k=next[k]; //����Ҫ����Ȼ������ѭ�� 
		}
	}
	for(i=1;i<=n;i++){
		cout<<dis[i]<<" ";
	} 
}
	 
