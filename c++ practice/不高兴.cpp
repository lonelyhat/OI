#include <iostream>
#include <iomanip>
using namespace std;
int main(){
	int n=0;
	int tmp=0;
	int a,b;
	for(int i=0;i<7;i++){
		cin>>a>>b;
		if((a+b)>8&&(a+b)>tmp){
			n=i+1;
			tmp=a+b;
		}
	}
	cout<<n;
}
