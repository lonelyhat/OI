#include <bits/stdc++.h>
using namespace std;
int main() {
    int n;
    cin>>n;
    int *p;
    p = new int[n];
    for(int i=0;i<n;i++){
        cin>>p[i];
    }
    int result=0;
    int tmp=0;
    for(int i=0;i<n;i++){
        if(p[i]==-1){
            if(tmp>result){
                result = tmp;
                tmp = 0;
                continue;
            }
            else{
                tmp = 0;
                continue;
            }
            
        }
        else{
            tmp = tmp+p[i];
            if(tmp > result){
            	result=tmp;
			}           
        }
    }
    cout<<result;
    delete[] p;
}
