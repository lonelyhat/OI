#include <iostream>
using namespace std;
int days;
int get_dayofweek();
int get_year();
int get_month(int);
/*����ȫ�ֱ���days,��Ϊ�����������ڼ��㶼��Ҫ�õ��ģ���������Ҫ�õĺ�����������á�*/ 
int main(){
	// �������������ֱ��ӦҪ������º�Ҫ���һ���е���һ�졣 
	int y,m,w;
	//�����ж���һ���Ƿ������� 
	int leap_year;
	//��һ�ܵڼ�������ƺ���ϵ���� 
	char week[7][10]={"Saturday","Sunday","Monday","Tuesday","Wednesday","Thursday","Friday"};
	//ѭ��ֱ�������daysΪ-1 
	while((cin>>days)&&days!=-1){
		w=get_dayofweek();  //����һ�����ܼ� 
		y=get_year();       //��������һ�� 
		leap_year=((y%4==0&&y%100!=0)||y%400==0);//�ж����ڵ������ƽ���� 
		m=get_month(leap_year); //�����ǵڼ��� 
		cout<<y<<"-"<<m<<"-"<<++days<<"-"<<week[w];
	}
	return 0;
} 
int get_year(){
	 int i=2000, leap_year;      //�趨��ʼ���Ϊ2000�� 
	 while(1){                   
	 	leap_year=((i%4==0&&i%100!=0)||i%400==0);
	 	if(leap_year==1&&days>=366)
	 	{days=days-366; i++;continue;}          //������366�죬���ȥ366�������ȥһ�꣬���Լ�����i������1. 
	 	else if(leap_year==0&&days>=365)
	 	{days=days-365;i++;continue;}          //ͬ�� 
	 	else
	 	break;
	 }
	 /*ѭ��ֱ������С��365�죨ƽ�꣩��366�죨���꣩��������ʣ������������ڸ������һ�¡�*/ 
	 return i;
}

int get_dayofweek(){
	int w=days%7;                        //�����������7����������Ӧ���б� 
	return w;
}
int get_month(int leap){
	int rmonth[12]={31,29,31,30,31,30,31,31,30,31,30,31};
    int pmonth[12]={31,28,31,30,31,30,31,31,30,31,30,31};
    /*��Ϊÿ�������ڲ�ͬ����Ҫ������������ʾƽ��ͬ���*/ 
    int j=0;
	while(1){
		if(leap==1&&days>=rmonth[j]){
			days=days-rmonth[j];              //����ʣ������������£����ȥ����µ�������������һ�֣�j+1,ֱ��С�ڣ���ʱ��ʣ����������Ӧ�ľ��������еļ��š� 
			j++;
		}
		else if (leap==0&&days>=pmonth[j]){   //ͬ�� 
			days=days-pmonth[j];
			j++;
		}
		else break;
	}
	return ++j;
}
