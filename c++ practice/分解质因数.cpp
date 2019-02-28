#include <iostream>
using namespace std;

void amazing(int a){
	while(a>1){
		for(int i=2;i<=a;i++){
			if(a%i==0){
				a=a/i;
				cout<<i<<' ';
				amazing(a);
			return;
			}
		}
	}
}

int main(){
	int m;
	cin>>m;
	amazing(m);
}

