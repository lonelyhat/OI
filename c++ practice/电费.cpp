#include <iostream>
#include <iomanip>
using namespace std;
int main(){
	double n;
	cin>>n; 
	cout<<setiosflags(ios::fixed);
	if(n<=150){
		cout<<setprecision(1)<<n*0.4463;
	} 
	else if(n>=151&&n<=400){
		cout<<setprecision(1)<<150*0.4463+(n-150)*0.4663;
	}
	else if(n>400){
		cout<<setprecision(1)<<150*0.4463+250*0.4663+(n-400)*0.5663;
	}
}
