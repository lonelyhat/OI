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
    for(int j=0;j<m;j++){                //һ��ִ��m�� 
    	int tmp=a[n-1];                 //�����һ������������ 
    	for(int k=n-1;k>=1;k--){
    		a[k]=a[k-1];                //�����������������һλ�����һλ����� ,��һλ����Ӱ�� 
		}
		a[0]=tmp;                       //��һλ��ֵΪ���һλԭ����ֵ��ʵ��ȫ��ѭ���ƶ�һλ 
	} 
	for(int j=0;j<n;j++){
		cout<<a[j]<<' ';
	}
} 
