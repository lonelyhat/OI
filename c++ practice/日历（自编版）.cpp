#include <iostream>
using namespace std;
int y=2000,m=1,d=1;       //����ȫ�ֱ������Ա����к���ģ�鶼���Զ��������ݽ����޸ġ� 
int a[12]={31,29,31,30,31,30,31,31,30,31,30,31};
int b[12]={31,28,31,30,31,30,31,31,30,31,30,31};
/*��Ϊÿ�������ڲ�ͬ����Ҫ������������ʾƽ��ͬ���*/ 
void change(int);
int mon1(int);
int day1(int);
int mon2(int);
int day2(int);
int get_dayofweek(int);
int main(){
	char week[7][10]={"Saturday","Sunday","Monday","Tuesday","Wednesday","Thursday","Friday"};
	int n;
	cout<<"Enter the number of days past: "<<endl;
	while(cin>>n&&n!=-1) {
		int w;
		change(n);
		w=get_dayofweek(n);  //����һ�����ܼ� 
		cout<<y<<"��"<<m<<"��"<<d<<"��"<<week[w];
		y=2000;
		m=1;
		d=1;
	}
	return 0; 
}
void change(int n){
	while(n>=0){
		if((y%4==0)&&(y%100!=0)||(y%400==0)){        //�ж�ƽ�� 
			if(n-366>0){
				n=n-366;               //��������һ���������ͼ�ȥ 
				y++;
			}
			else{                      //ֱ������С��һ������������º��� 
				m=m+mon1(n);            
				d=1+day1(n);
				n=-1;
			}
	    }   
	    else{
	        if(n-365>0){
	        	n=n-365;
	        	y++;
			}
			else{
				m=m+mon2(n);
				d=1+day2(n);
				n=-1;
			}
	    }
	}
}
//�������ܼ� 
int get_dayofweek(int n){
	int w=n%7;                        //�����������7����������Ӧ���б� 
	return w;
}
//�������·� 
int mon1(int n){
	int i=0;
	for(i=0;i<12,n>=a[i];i++){         
		n=n-a[i];
	}
	return i;
}
int mon2(int n){
	int i=0;
	for(i=0;i<12,n>=b[i];i++){
		n=n-b[i];
	}
	return i;
}
//������������� 
int day1(int n){
	int i=0;
	for(i=0;i<12,n>=a[i];i++){
		n=n-a[i];
	}
	return n;
}
int day2(int n){
	int i=0;
	for(i=0;i<12,n>=b[i];i++){
		n=n-b[i];
	}
	return n;
}
