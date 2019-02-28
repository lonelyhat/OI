#include <iostream>
using namespace std;
int y=2000,m=1,d=1;       //定义全局变量，以便所有函数模块都可以对日期数据进行修改。 
int a[12]={31,29,31,30,31,30,31,31,30,31,30,31};
int b[12]={31,28,31,30,31,30,31,31,30,31,30,31};
/*因为每个月日期不同，需要两个数组来表示平润不同情况*/ 
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
		w=get_dayofweek(n);  //求这一天是周几 
		cout<<y<<"年"<<m<<"月"<<d<<"日"<<week[w];
		y=2000;
		m=1;
		d=1;
	}
	return 0; 
}
void change(int n){
	while(n>=0){
		if((y%4==0)&&(y%100!=0)||(y%400==0)){        //判断平润 
			if(n-366>0){
				n=n-366;               //天数超过一年天数，就减去 
				y++;
			}
			else{                      //直到天数小于一年天数，求出月和日 
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
//用于求周几 
int get_dayofweek(int n){
	int w=n%7;                        //求出天数除以7的余数，对应于列表。 
	return w;
}
//用于求月份 
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
//用于求具体日期 
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
