/*
***************************************题目*******************************************
口袋中有红、黄、蓝、白、黑5种颜色的球若干个。每次从口袋中任意取出3个球，问得到3种不同颜色的球的可能取法，输出每种排列的情况。
程序

#include <iostream>
#include <iomanip>                             //在输出时要用到setw控制符
using namespace std;
int main( )
{ enum color {red,yellow,blue,white,black};    //声明枚举类型color
color pri;                                     //定义color类型的变量pri
int i,j,k,n=0,loop;                            //n是累计不同颜色的组合数
for (i=red;i<=black;i++)                       //当i为某一颜色时
for (j=red;j<=black;j++)                       //当j为某一颜色时
if (i!=j)                                      //若前两个球的颜色不同
{ for (k=red;k<=black;k++)                     //只有前两个球的颜色不同，才需要检查第3个球的颜色
if ((k!=i) && (k!=j))                          //3个球的颜色都不同
{n=n+1;                                        //使累计值n加1
cout<<setw(3)<<n;                              //输出当前的n值，字段宽度为3
for (loop=1;loop<=3;loop++)                    //先后对3个球作处理
{switch (loop)                                 //loop的值先后为1,2,3
{case 1: pri=color(i);break ;                  //color(i)是强制类型转换，使pri的值为i
case 2: pri=color(j);break ;                   //使pri的值为j
case 3: pri=color(k);break ;                   //使pri的值为k
default :break ;
}
switch (pri)                                   //判断pri的值，输出相应的“颜色”
{case red: cout<<setw(8)<<"red"; break;
case yellow: cout<<setw(8)<<"yellow";break;
case blue:cout<<setw(8)<<"blue"; break ;
case white:cout<<setw(8)<<"white"; break ;
case black:cout<<setw(8)<<"black"; break ;
default : break ;
}
}
cout<<endl;
}
}
cout<< "total :"<<n<<endl;                     //输出符合条件的组合的个数
return 0;
}
*/

