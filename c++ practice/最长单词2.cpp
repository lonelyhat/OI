#include <iostream>
using namespace std;
int main(){
	char s[501];                  
	cin.getline(s,501);
	int count[501]={0};           //���ڼ�¼�ڡ����������ʳ��� 
	int b[501]={0};          //������ÿһ����������ĸλ�� 
	int i=0,j=0;
	int m=0;
	for(int i=0;s[i]!='.';i++){
		if(s[i]!=' '){
			count[j]++;              //�õ��ʳ���+1 ���ɴ�����õ��ʳ��� 
		}
		else
		{
			j++;                    //���ʴ���+1 �� ���jֵΪ����������-1��count[0]��¼���ǵ�һ�����ʳ��ȣ� 
			b[j]=i+1;              // д���j�����ʿ�ͷ��ĸλ�� 
		}
	}
	int max=count[0];                  //��������еĳ��� 
	int n=0;                    //���������� 
	for(int k=0;k<=j;k++){
		if(max<count[k]){
			max=count[k]; 
			n=k;
		}
	} 
	//�ɴ��ҳ�����ĵ��ʵ����n���䳤�� 
	for(int p=b[n];p<b[n]+max;p++){
		cout<<s[p];
	}
}
