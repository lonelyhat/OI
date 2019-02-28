#include <bits/stdc++.h>
using namespace std;
int main() {
    long long n,a=0;
    cin>>n;
    while(n>1){
    	a++;
    	n=n/2;
	}
	cout<<a;
}
