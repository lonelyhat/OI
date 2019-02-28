#include <iostream>
using namespace std;
int p=0, q=0,minimum=99999999,n=0,m=0;
int a[51][51],book[51][51]; 
int next[4][2]={{0,1},{1,0},{0,-1},{-1,0}};
void dfsmap(int x, int y, int step){
	//�жϵ�ǰ���Ƿ�Ϊ�յ� 
	if(x==p && y==q){
		//�жϵ�ǰ�����Ƿ����� 
		if(step<minimum){
			minimum=step;     //¼�����Ų��� 
		}
		return;
	}
	int k=0;
	int tx, ty;
	//ģ�����һ��·���̽· 
	for(k=0;k<=3;k++){
		tx=x+next[k][0];   //��ǰ�������Ҫ�ߵĲ��� 
		ty=y+next[k][1];
		//�ж��Ƿ�Խ�� 
		if(tx<1||tx>n||ty<1||ty>m){
			continue;
		}
		//�жϸõ��Ƿ�Ϊ�ϰ��������������·���У�û�л�ͷ·��  
		if(a[tx][ty]==0 && book[tx][ty]==0){
			book[tx][ty]=1;         //���Ϊ���߹� 
			dfsmap(tx,ty,step+1);   //ģ����һ�� 
			book[tx][ty]=0;         //���Խ�����ȡ����� 
		}
	}
	return;
} 
int main(){
	int i, j ,startx, starty;
	scanf("%d %d",&n,&m);
	//������ͼ 
	for(i=1;i<=n;i++){
		for(j=1;j<=n;j++){
			scanf("%d", &a[i][j]);
		}
	}
	//����������յ����� 
	scanf("%d %d %d %d", &startx, &starty,&p,&q);
	book[startx][starty]=1;
	dfsmap(startx,starty,0);
	printf ("%d",minimum);
	return 0;
}
