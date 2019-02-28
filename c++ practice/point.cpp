#include<iostream> 
using namespace std;
int add(int *px,int *py){
	int t;
	t=*px+*py;
	return t;
}
void swap(int *mx,int *my){
	int t=*mx;
	*mx=*my;
	*my=t;
}
int aadd(int j,int k){
	int z;
	z=j+k;
	return z;
}
void sswap(int m, int n){
	int g;
	g=m;
	m=n;
	n=g;
}
int main(){
	int a,b;
	cin>>a>>b;
	int *pa=&a;
	int *pb=&b;
	cout<<aadd(*pa,*pb)<<endl;
	cout<<pa<<" "<<pb<<endl;
	swap(pa,pb);
	cout<<*pa<<" "<<*pb;
}
