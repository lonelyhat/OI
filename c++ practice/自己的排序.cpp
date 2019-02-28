#include <iostream>
using namespace std;
void swap(int &a, int &b){
	int tmp;
	tmp=b;
	b=a;
	a=tmp;
}
int main(){
	int a[100];
	int n;
	cin>>n;
	for(int i=0; i<n;i++){
		cin>>a[i];
		int ins=i; 
		while(ins>0){
			if(a[ins]>a[ins-1]){ 
			swap(a[ins],a[ins-1]);
		}
		ins--; 
	}
}
    for(int i=0; i<n; i++){
	cout<<a[i]<<" ";
	}
}
