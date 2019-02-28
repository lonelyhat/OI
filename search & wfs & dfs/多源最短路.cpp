//floyd-warshall:��Դ���·�����⡣O(n^3)���Ӷ� 
#include <iostream>
using namespace std; 
int main() {
	int e[101][101];   //�����ڵ����磬�����������֮��ߵĹ�ϵ 
	int inf=999999;    
	int m,n;
	cin>>m>>n;
//��ʼ�� 
	for(int i=1;i<=m;i++)
		for(int j=1;j<=m;j++)
			if(i==j)
			e[i][j]=0; 
			else
			e[i][j]=inf;
			
//���� 
	for(int i=1;i<=n;i++){
		int p1,p2,d;
		cin>>p1>>p2>>d;
		e[p1][p2]=d;
	}
	int i,j,k;
	
//�����㷨���� 
	for (k=1;k<=m;k++)
		for(i=1;i<=m;i++)
			for(j=1;j<=m;j++)
				if (e[i][j]>e[i][k]+e[k][j])    //ע����e[i][k]��e[k][j],��Ϊ����k�ŵ���Ϊ��ת��˳��ӦΪ��i��k�ٵ�j 
					e[i][j]=e[i][k]+e[k][j]; 
	//ÿ��ѭ������ˢ��һ�����飬ˢ�º������洢ΪΪ������ת�������·����ֱ�����е㶼��Ϊ������ת��ʱ���� 
	//������kΪ3ʱ����ʾ��ʱ����洢��ֵΪ1��2��3����Ϊ��ת��ʱ�����·�� 
//������ 
	for(i=1;i<=m;i++){ 
		for(j=1;j<=m;j++)
			printf("%10d",e[i][j]); 
		cout<<endl; 
	} 
}
