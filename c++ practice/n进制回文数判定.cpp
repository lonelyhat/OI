#include <iostream>
using namespace std;
int deter(int a){
	int ar[100];
	int i=1;
	int d=0;
	while(a>0){
		ar[i]=a%10;
		a=a/10;
		i++;
	}
	for(int r=0;r<=i/2;r++){
		if(ar[r]==ar[i-r]){
			d=d+0;
		}
		else{
			d=d+1;
		}
	}
	if(d==0){
		return 1;
	}
	else 
	return 0;
}


int convert(int o, int i){
	int sum=0;
	int tmp=1;
	while(o>0){
		sum=sum+o%i*tmp;
		o=o/i; 
		tmp=tmp*10;
	}
	return sum;
}
int minc(int input){
	int A=0,B;
	int tmp=2;
	while(tmp>0){
		A=convert(input,tmp);
		B=deter(A);
		if(B==1){
			return tmp;
		}
		else
		tmp++;
	
	}
	
}
int main(){
	int t;
	int n[10000]; 
	cout<<"数据组数：";
	cin>>t;
	for(int i=0;i<t;i++){
		cin>>n[i];
		cout<<minc(n[i])<<endl;
	} 
	return 0;
}
