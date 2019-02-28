#include<iostream>
using namespace std;
int book[101]={0};
int mini=9999999, n,end;
int e[101][101];
void dfs(int cur, int dis){
	//���ۼ�·���ѳ�����֪���·�̣���ֱ�ӷ��� 
	if(dis>mini){
		return;
	}
	//�������յ��򷵻��жϴ�·���Ƿ�Ϊ���·�� 
	if(cur==end){
		if(dis<mini){
			mini=dis;
			return;
		}
	}
	//��ʼ������ÿ��һ��������Ϊ�ѹ��� 
	for(int j=1;j<=n;j++){
		if(e[cur][j]!=-1 && book[j]==0){
			book[j]=1;
			dfs(j,dis+e[cur][j]);
			book[j]=0;
		}
	}
	return;
} 
int main(){
	int i,j,m,a,b,c,o;
	//node����,�ߵĸ�����㣬�յ㡣 
	cout<<"No. of cities: "; 
	cin>>n;
	cout<<endl; 
	cout<<"No. of sides: ";    
	cin>>m;
	cout<<endl;
	cout<<"Origin: ";
	cin>>o;
	cout<<endl;
	cout<<"Destination: ";
	cin>>end;
	cout<<endl;
	for(i=1;i<=n;i++){
		for(j=1;j<=n;j++){
			if(i==j){
				e[i][j]=0;
			}
			else{
				e[i][j]=-1;
			}
		}
	}
	for(i=1;i<=m;i++){
		cin>>a>>b>>c;
		e[a][b]=c;  //˫�򳵵� 
		e[b][a]=c;
	}
	book[o]=1;
	dfs(o,0);
	cout<<mini;
	return 0;
}
