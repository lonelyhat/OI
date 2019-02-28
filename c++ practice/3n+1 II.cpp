#include <bits/stdc++.h>
#include <algorithm>
using namespace std;
int main() {
    int n;
    int t; 
    cin>>n>>t;
    for(int i=1; i<t;i++){
	    if(n>1){
    	if(n%2!=0){
    		n=n*3+1;
		}
		else{
			n=n/2;
		}
	}
	    else
		n=-1;
	}
	cout<<n;
}

