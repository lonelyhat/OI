/*#include <iostream>
using namespace std;
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
int main(){
	int num=0,n=0;
	while(1){
			cout<<"Enter a number in Decimal"<<endl;
	cin>>num;
	cout<<"Enter a number n, which satnd for base-n system that you want to convert the number you entered into."<<endl;
	cin>>n;
	if((n>0)&&(num>0)){
		cout<<convert(num,n)<<endl;
	}
	if((n<=0)&&(num>0))
	cout<<"Wrong system!"<<endl;
	else if((n>0)&&(num<=0))
	cout<<"Wrong number entered!"<<endl;
	else if((n<=0)&&(n<=0))
	cout<<"Wrong system and number!"<<endl; 
} 
}
*/

//Use array to solve this problem
/*
#include <iostream>
using namespace std;
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
int main(){
	int num[100],n[100];
	int end=0;
	cout<<"The amount of numbers you want to convert: ";
	cin>>end;
	for(int i=0;i<end;i++){
		cin>>num[i]>>n[i];
	}
	for(int i=0;i<end;i++){
		cout<<"In Base-"<<n[i]<<" system, the number is: "<<endl;
		cout<<convert(num[i],n[i])<<endl;
	}
}
*/

