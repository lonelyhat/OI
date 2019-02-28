#include<iostream>
#include<algorithm>
using namespace std;
int main(){
	int n,m;
	int a,b,c;
	int max[100001] = {0};
	cin>>n>>m;
	for(int i=0;i<m;i++){
		cin>>a>>b>>c;
		if(c>max[a-1]){
			max[a-1]=c;
		}
		if(c>max[b-1]){
			max[b-1]=c;
		}
	}
	for(int i = 0;i<n;i++){
		if(i!=n-1){
			if(max[i]==0){
				cout<<1000000000<<" ";
			}
			else{
				cout<<max[i]<<" ";
			}
		}
		else{
			if(max[i]==0){
				cout<<1000000000<<" ";
			}
			else{
				cout<<max[i];
			}
		}
	}
} 
