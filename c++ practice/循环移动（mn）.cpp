#include <iostream>
using namespace std;
int main(){
	int n,m;
	int a[1000];
	cin>>n>>m;
	int i=0;
	for(i=0;i<n;i++){
	cin>>a[i];
    }
    for(int j=0;j<m;j++){                //一共执行m次 
    	int tmp=a[n-1];                 //将最后一个输入数保存 
    	for(int k=n-1;k>=1;k--){
    		a[k]=a[k-1];                //将所有数依次向后推一位，最后一位被替代 ,第一位不受影响 
		}
		a[0]=tmp;                       //第一位赋值为最后一位原来的值，实现全部循环移动一位 
	} 
	for(int j=0;j<n;j++){
		cout<<a[j]<<' ';
	}
} 
