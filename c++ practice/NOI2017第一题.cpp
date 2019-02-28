#include<iostream> 
#include<stdio.h>
#include<stdlib.h>
using namespace std;
int compare(const void *a,const void *b)
{
     return *(int*)b-*(int*)a;   
}
int main(){
	int n;
	cin>>n;
	int *p; 
	int *w;
	p=new int[n];
	w=new int[n];
	for(int i=0;i<n;i++){
		cin>>p[i];
		cin>>w[i];
	}
	qsort(p,n,sizeof(int),compare);
	qsort(w,n,sizeof(int),compare);
	if(n%2!=0){
		cout<<p[n/2+1]<<" "<<w[n/2+1];
	}
	else
	{
		cout<<(p[n/2]+p[n/2-1])/2<<" "<<(w[n/2]+w[n/2-1])/2;
	}
	delete [] p;
	delete [] w;
} 
