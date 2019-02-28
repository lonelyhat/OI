#include <iostream>
using namespace std;
int days;
int get_year(int);
int get_month(int,int,int);
/*定义全局变量days,因为这是所有日期计算都需要用到的；声明三个要用的函数，方便调用。*/ 
int main(){
	// 定义三个变量分别对应要求的年月和要求的一周中的哪一天。 
	int y,m;
	int o_y,o_m,o_d;
	//用于判断这一年是否是闰年 
	int leap_year;
	//循环直到输入的days为-1 
	while((cin>>o_y>>o_m>>o_d>>days)&&o_y!=-1){
		y=get_year(o_y);       //求这是哪一年 
		leap_year=((y%4==0&&y%100!=0)||y%400==0);//判断现在的年份是平是润 
		m=get_month(leap_year, o_m,o_d); //求这是第几月 
		cout<<y<<"-"<<m<<"-"<<++days;
	}
	return 0;
} 
int get_year(int o_y){
	 int i=o_y, leap_year;      //设定初始年份为2000年 
	 while(1){                   
	 	leap_year=((i%4==0&&i%100!=0)||i%400==0);
	 	if(leap_year==1&&days>=366)
	 	{days=days-366; i++;continue;}          //若超过366天，则减去366，代表过去一年，所以计数器i会增加1. 
	 	else if(leap_year==0&&days>=365)
	 	{days=days-365;i++;continue;}          //同理 
	 	else
	 	break;
	 }
	 /*循环直到天数小于365天（平年）或366天（闰年），这样所剩天数可以求出在该年的哪一月。*/ 
	 return i;
}

int get_month(int leap,int o_m,int o_d){
	int rmonth[12]={31,29,31,30,31,30,31,31,30,31,30,31};
    int pmonth[12]={31,28,31,30,31,30,31,31,30,31,30,31};
    /*因为每个月日期不同，需要两个数组来表示平润不同情况*/ 
    int j=o_m-1;
    days=days+o_d-1;
	while(1){
		if(leap==1&&days>=rmonth[j]){
			days=days-rmonth[j];              //若所剩天数超过这个月，则减去这个月的天数并进行下一轮，j+1,直到小于，此时所剩的天数所对应的就是日期中的几号。 
			j++;
		}
		else if (leap==0&&days>=pmonth[j]){   //同理 
			days=days-pmonth[j];
			j++;
		}
		else break;
	}
	return ++j;
}
