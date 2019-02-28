#include <iostream>
using namespace std;

void fab(int next,int sum,int times){
	if(times==3){
		cout<<1<<' '<<1<<' '<<2<<' ';
	}
	if(times>=30){
		return;
	}
	int newsum=next+sum;
	cout<<newsum<<' ';
	fab(sum,newsum,++times);
}

int main(){
	fab(1,2,3);
}


//输出斐波那契数列第20个数
/* 
#include <iostream>
using namespace std;

int newsum;

void fab(int next,int sum,int times){
	if(times>=20){
		return;
	}
	newsum=next+sum;
	fab(sum,newsum,++times);
	
}

int main(){
	fab(1,2,3);
	cout<<newsum<<endl;
}
*/

