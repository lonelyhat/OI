#include <iostream>
#include <string>
using namespace std;
int n, book[28]={0};
char a[28]={};
char c[28]={};
void dfsw(int step){
	int i;
	if(step == n){
		for(i=0; i<n; i++){
			printf("%c",a[i]);
		}
		printf("\n");
		return;
	}
	for(i=0;i<n;i++){
		if(book[i]==0){
			a[step]=c[i];
			book[i]=1;
			dfsw(step+1);
			book[i]=0;
		}
	}
	return;
}
int len(char b[]){
	int n=0;
	while(b[n]!='\0'){
		n++;
	}
	return n;
}
int main(){
	gets(c);
	n=len(c);
	dfsw(0);
	return 0;
}
