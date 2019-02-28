#include <iostream>
#include <string>
using namespace std;
int main(){
	int t;
	int i;
	cin>>t;
	for(i=0; i<t; i++){
		int n;
		cin>>n;
		int a[5001];
		int b[4000];
		int k=0;
		for(int j=0;j<n;j++){
			cin>>a[j];
		}
		string s;
		while((cin>>s)&&(s!="End")){
			int p,q;
			cin>>p>>q;
			if(s=="Add"){
				a[p-1]=a[p-1]+q;
			}
			else if(s=="Sub"){
				a[p-1]=a[p-1]-q;
			}
			else if(s=="Query"){
				int sum=0;
				for(int j=p-1;j<=q-1;j++){
					sum=a[j]+sum;
				}
				b[k]=sum;
				k=k+1;
			}
		}
		if(s=="End"){
			cout<<"Case "<<i+1<<":"<<endl;
		    for(int j=0;j<k;j++){
			cout<<b[j]<<endl;
			}
		}
		}
    }
