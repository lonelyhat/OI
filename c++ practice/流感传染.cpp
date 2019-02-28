#include <iostream>
#include <stdio.h>
using namespace std;
int main(){
	char a[101][101];
	int n;
	cout<<"输入人口大小:"<<endl; 
	cin>>n;
	for(int i=0;i<n;i++){
	for(int j=0;j<n;j++){ 
	    a[i][j]='.';
	} 
	}
	while(1){
	int origin=0;
	cout<<"输入传染源数量："<<endl; 
	cin>>origin;
	cout<<"输入传染源坐标："<<endl; 
	for(int i=0;i<origin;i++){
		int x,y;
	    cin>>x>>y;
	    a[x-1][y-1]='@';
	}
	int block=0;
	cout<<"输入间隔数量："<<endl;
	cin>>block;
	cout<<"输入间隔坐标："<<endl;
	for(int i=0;i<block;i++){
		int p,q;
	    cin>>p>>q;
	    a[p-1][q-1]='#';
	}
	cout<<"输入天数："<<endl; 
	int m;
	int sum=0;
	cin>>m;
	for(int d=1;d<=m;d++){
	for(int i=0;i<n;i++){
	for(int j=0;j<n;j++){
		if(a[i][j]=='!')
		a[i][j]='@';
	    }
        }
    for(int i=0;i<n;i++){
    	for(int j=0;j<n;j++){
    		if(a[i][j]=='@'){
    			if(i+1<n&&a[i+1][j]=='.')
    			a[i+1][j]='!';
    			if(i-1>=0&&a[i-1][j]=='.')
    			a[i-1][j]='!';
    			if(j+1<n&&a[i][j+1]=='.')
    			a[i][j+1]='!';
    			if(j-1>=0&&a[i][j-1]=='.')
    			a[i][j-1]='!';
			}
		}
	} 
	}
	for(int i=0;i<n;i++){
		cout<<endl;
		for(int j=0;j<n;j++){
			cout<<a[i][j];
			if(a[i][j]=='@')
			sum++;
		}
	} 
	cout<<endl<<sum<<endl;
	for(int i=0;i<n;i++){
	for(int j=0;j<n;j++){ 
	    a[i][j]='.';
	} 
	}
	}	
    return 0;	
}
