#include <bits/stdc++.h>
#include <string> 
using namespace std;
int main() {
    int n;
    cin>>n;
    string str[1000];
    for(int i=0;i<n;i++){
    	cin>>str[i]; 
	} 
    string com=str[0];
    for(int j=0;j<n;j++) {
    	if(com.size()<str[j].size()){
    		com=str[j];
		}
	}
	cout<<com;
}
