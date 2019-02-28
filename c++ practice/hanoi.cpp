#include <iostream>
using namespace std;
void move(char a, char b){
	cout<<a<<"->"<<b<<endl;
}
void hanoi(int n, char a, char b,char c){
	if(n==1)
	move(a,c);
	else
	{
		hanoi(n-1,a,c,b);
		move(a,c);
		hanoi(n-1,b,a,c);
	}
}

int main(){
	int m;
	cin>>m;
	hanoi(m,'A','B','C');
	return 0;
}
