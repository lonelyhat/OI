#include <bits/stdc++.h>
#include <string>
using namespace std;
int main() {
	int N,M,D=0,X=0;
	string str;
	cin>>N>>M;
	for(int i=0;i<M;i++){
		cin>>str;
		if(str=="LAND"){
			D++;
		}
		else if(str=="LEAVE"){
			D--;
		}
		else if(str=="EVACUATE"){
			D=0;
		}
		if(D>N){
	    X++;
	    }
	}
	if((D<=N)&&(X==0))
	cout<<"PLAN ACCEPT";
	else
	cout<<"PLAN REJECTED" ;
}
