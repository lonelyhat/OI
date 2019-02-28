#include <iostream>
using namespace std;
bool palindromes(long long num){
	int ar[100];
	int i = 0;
	int d = 0;
	if (num<10){
		return true;
	}
	while(num>0){
		ar[i] = num%10;
		num = num/10;
		i++;
	}
	for(int r = 0; r<=i/2;r++){
		if(ar[r]!=ar[i-r-1]){
			return false;
		}
	}
	return true;
}

int main(){
	long long s,e;
	cin>>s>>e;
	for(int i=0;i<e-s+1;i++){
		if (palindromes(s+i) == true){
			cout<<"Palindrome!"<<endl;
		}
		else{
			cout<<s+i<<endl;
		}
	} 
	return 0;
}
