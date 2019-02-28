#include <bits/stdc++.h>
#include <string> 
using namespace std;
void sort(int N, string str[]){
	for(int j=0;j<N;j++){
		for(int k=0;k<N-1;k++){
			if(str[k].size()<str[k+1].size()){
				string s;
				s=str[k];
				str[k]=str[k+1];
				str[k+1]=s;
			}
		}
	} 
}
int main() {
    int n;
    cin>>n;
    string str[1000];
    for(int i=0;i<n;i++){
    	cin>>str[i];
	}
	sort(n,str);
	for(int i=0;i<n;i++){
		cout<<str[i]<<endl;
	}
}
