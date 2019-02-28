#include <iostream>
#include <cmath>
using namespace std;

bool determine(int n){
	int mid=sqrt(n);
	for(int m=2;m<mid;m++){
		if(n%m==0){
			return false;
		}
	}
	return true;
}

int main()
{
	int end;
	cout<<"pls input a range: ";
	cin>>end;
	int z;
	for(z=2;z<=end;z++){
		if(determine(z)){
			cout<<z<<' ';
		}
	}
}








