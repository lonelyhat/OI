#include <bits/stdc++.h>
#include <algorithm>
using namespace std;
int main() {
    long n;
    int count=0;
    cin>>n;
    long d;
    d=n;
    while(d>0){
    	long comp=1;
    		while(comp<=d){
            comp=comp*2;
            }
            comp=comp/2;
            d=d-comp;
        count++;
    }
    cout<<count;
}
