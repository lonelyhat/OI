#include <iostream>
using namespace std;
int main(){
	int a[1000];
	int b[1000];
	int count=0,num=0;
	cin>>num; //������� 
	for(int i=0; i<num;i++){         //����һ������ 
		cin>>a[i];
	}
	for(int j=0;j<num-1;j++){           //���� 
		for(int k=0;k<num-1-j;k++){
			if(a[k]>a[k+1]){
				int tmp=a[k+1];
				a[k+1]=a[k];
				a[k]=tmp;
			}
		}
	}
	for(int i=0;i<num;i++){         //��������� 
		if(a[i]%2==1){
			b[count]=a[i];
			count++;
		}
	}
	for(int i=0;i<num;i++){         //�����ż�� 
		if(a[i]%2==0){
			b[count]=a[i];
			count++;
		}
	}
	for(int i=0;i<num;i++){         //��� 
		cout<<b[i]<<' ';
	}
} 
