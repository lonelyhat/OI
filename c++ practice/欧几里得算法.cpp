#include <iostream>
using namespace std;
int gtd(int p, int q){
	if(p>q){
		if(q==0) return p;
	else{
		int r;
		r=p%q;
	    gtd(q,r);
	if(r==1)
	return q;
	}
	} 
	else if(p<q){
			if(p==0) return q;
	else{
		int r;
		r=q%p;
	    gtd(p,r);
	if(r==1)
	return p;
	} 
}
}

int lcm(int m, int n){
	int z,mul;
	if(m>n){
		z=gtd(m,n);
		mul=n/z*m;
	}
	else{
		z=gtd(n,m);
		mul=m/z*n;
	}
	return mul;
} 

int main(){
	int a,b;
	int num=0;
	cin>>a>>b;
	cin>>num;
	int c;
	if(num==0){
		c=gtd(a,b);
	    cout<<c;
	}
	else if (num==1) {
		c=lcm(a,b);
		cout<<c;
	}
} 
