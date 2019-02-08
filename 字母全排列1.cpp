#include <stdio.h>
using namespace std;
char a[28];
int book[28]={0};
char s[30]="0abcdefghijklmnopqrstuvwxyz";
int n;
void dfs(int step){
	int i;
	if(step==n+1){
		for(i=1;i<=n;i++){
			printf("%c", a[i]);
		}
		printf("\n");
		return;
	}
	else{
		for(i=1;i<=n;i++){
		if(book[i]==0){
			a[step]=s[i];
			book[i]=1; 
			dfs(step+1);
			book[i]=0;
		}
	}
	}
	return; 
}
int main(){
	scanf("%d", &n);
	dfs(1);
	return 0;
}
