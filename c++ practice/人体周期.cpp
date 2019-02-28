#include <iostream>
using namespace std;
#define N 21252 
int main(){
	int p,e,i,d,No=0;
	while(cin>>p>>e>>i>>d&&p!=-1&&p<=365){
		No++;
		int k;
		for(k=d+1;(k-p)%23;k++);
		for(;(k-e)%28;k+=23);
		for(;(k-i)%33;k+=23*28);
		cout<<"Case "<<No<<": the next tiple peak occurs in "<<k-d<<endl;
	}
	return 0;
}
