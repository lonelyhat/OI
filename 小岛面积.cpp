//Area of island 
#include <iostream>
using namespace std;
struct node{
	int x;
	int y;
}; 
int main(){
	int a[51][51];
	int book[51][51]={0};
	int n, m ;
	int i,j,k,cx,cy;
	cin>>n>>m;
	cin>>cx>>cy;
	for(i=1;i<=n;i++){
		for(j=1;j<=m;j++){
			cin>>a[i][j];
		}
	}
	int next[4][4]={{0,1},{1,0},{0,-1},{-1,0}};
	struct node que[2501];
	int head=1;
	int tail=1;
	int tx ;
	int ty ;
	que[tail].x=cx;
	que[tail].y=cy;
	tail++;
	book[cx][cy]=1;
	int sum=1;
	while (head<tail){
		for(k=0;k<=3;k++){
			tx=que[head].x+next[k][0];
			ty=que[head].y+next[k][1];
			if(tx>n||tx<1||ty>m||ty<1){
				continue;
			}
			if(a[tx][ty]!=0&&book[tx][ty]==0){
				que[tail].x=tx;
				que[tail].y=ty;
				book[tx][ty]=1;
				sum++;
				tail++;
			}
		}
		head++;
	}
	cout<<sum;
	
}

