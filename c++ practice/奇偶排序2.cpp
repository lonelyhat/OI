#include <iostream>
using namespace std;
int main(){
	int a[1000];
	int b[1000];
	int count=0,num=0;
	cin>>num; //输入个数 
	for(int i=0; i<num;i++){         //输入一组数据 
		cin>>a[i];
	}
	for(int j=0;j<num-1;j++){           //排序 
		for(int k=0;k<num-1-j;k++){
			if(a[k]>a[k+1]){
				int tmp=a[k+1];
				a[k+1]=a[k];
				a[k]=tmp;
			}
		}
	}
	for(int i=0;i<num;i++){         //分离出奇数 
		if(a[i]%2==1){
			b[count]=a[i];
			count++;
		}
	}
	for(int i=0;i<num;i++){         //分离出偶数 
		if(a[i]%2==0){
			b[count]=a[i];
			count++;
		}
	}
	for(int i=0;i<num;i++){         //输出 
		cout<<b[i]<<' ';
	}
} 
