#include <iostream>
using namespace std;
int main(){
	int a[13];    //��¼�������� 
	for(int i=0;i<12;i++){
		cin>>a[i];
	} 
	int x;       //���������·� 
	int sum=0;   //ÿ��ʣ�µ�Ǯ 
	int intt=0;     //��Ϣ 
	int rest=0;     //�����Ǯ 
	bool d=0;
	for(int i=0;i<12;i++){
		if(a[i]<=300){
			sum=sum+300-a[i];
			if(sum>=100){
				int tmp=sum/100 *100; 
				rest=rest+tmp;
				sum=sum-tmp;
			}
		}
		else{
			sum=sum+300; 
			if(sum>=a[i]){
				sum=sum-a[i]; 

			}
			else if(sum<a[i]){
				cout<<"-"<<i+1;
				d=1;
				break;
			}
			
		}
	} 
	if(d==0){
		cout<<rest+rest/5+sum;
	}
	return 0;
}
