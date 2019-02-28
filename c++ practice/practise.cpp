//#include<iostream>
//using namespace std;

/*从50加到100的和
int main()
{
	int sum=0, i=50;
	while(i<=100){
		sum+=i;
		++i;
	}
	cout<<sum<<endl;
	return 0;
}
*/

/*cout出10到0所有数字，并使其按从大到小顺序排列（while） 
int main()
{
	int num=10, i=0,n;
	while(i<=10){
		n=num-i;
		++i;
		cout<<n<<endl;	
	}
	return 0;
}
*/

/*依次输出从10到0所有整数。 （for） 
int main()
{
	int n=10,a;
	for(int i=0; i<=10; ++i){
		a=n-i;
	    cout<<a<<endl;
	}
}
*/

/*比较两个数大小，并输出从较小数加到较大数的和 
int main(){
	int lower, upper,a,b;
	cout<<"enter two numbers :"<<endl;
	cin>>a>>b;
	if(a>b){
		lower=b;
		upper=a;
	}
	else{
		lower=a;
		upper=b;
		
	}
	int sum=0;
	for(int m=lower;m<=upper;++m){
		sum+=m;
	}
	cout<<"sum of "<<lower<<" to "<<upper<<" is equal to "<<sum<<endl;
	
}
*/

/*
int main()       //算出一组数据中负数个数 
{
	int a; int i=0;
	cout<<"Enter a group of mubers"<<endl;
	while(cin>>a){   //输入一组数据 
		if(a<0){     //判断是否为负数 
		++i;
	}
	}
	cout<<i<<endl;    //输出 
}
*/
/*输入两个任意整数，输出大于其中较小数，小于其中较大数的所有整数。 
int main (){
	int a, b;
	int n;
	cout<<"Enter two numbers"<<endl;
	cin>>a;
	cin>>b;
	int p,q;
	p=min(a,b);
	q=max(a,b);
	for(int n=p+1; n<q;n++ ){
			cout<<n<<"\t";
		}			
	}
*/

/*用if改写上面一个程序 
int main()
{
	int a,b,p,q;
	int n;
	cout<<"Enter two numbers"<<endl;
	cin>>a>>b;
	if(a>b){
		p=a;
		q=b;
	} 
	else{
		q=a;
		p=b;
	}
	for(int n=q+1; n<p; ++n){
		cout<<n<<"\t";
	}
	return 0;
 } 
*/

/*另一种形式 
int main()
{
	int a,b;
	int n;
	cin>>a>>b;
	if(a>b){
		for(int n=b+1; n<a; ++n){
			cout<<n<<"\t";
		}
	} 
	else{
		for(int n=a+1; n<b; ++n){
			cout<<n<<"\t";
		}
	}
 } 
*/
/*用while改写 
int main()
{
	int a,b;
	int n;
	cin>>a>>b;
	if(a>b){
		n=b+1;
		while(n<a){
			++n;
		    cout<<n<<"\t";
		}
	}
	else{
		n=a+1;
		while(n<b){
			++n;
			cout<<n<<"\t";
		}
	}
}
*/ 

/*字符串字面值的连接 *2

int main(){
	cout << "multi-line " L"literal " <<endl;
}                               //此程序结果未定义，可能产生一个没有用的值或导致崩溃 
 
int main()
{
   cout << "a multi-line "
"string literal "
"using concatenation"
<<endl;
}                
*/

//计算2的10次方——蛮力破解 
/*
int main()
{
// a first, not very good, solution
std::cout << "2 raised to the power of 10: ";
std::cout << 2*2*2*2*2*2*2*2*2*2;
std::cout << std::endl;
return 0;
}
*/
 
//计算2的10次方——正解(注：此处cnt为count缩写） 
/*
int main()
{                                       // local objects of type int
int value = 2;
int pow = 10;
int result = 1;                         // repeat calculation of result until cnt is equal to pow                                  
for (int cnt = 0; cnt != pow; ++cnt)    //why use "!=" ？ can we replace it with " < " or "<="? Are they have the same function here?
//"！="&"<" can be replaced by each other in C++ language. 
result *= value;                        // result = result * value;
cout << value
<< " raised to the power of "
<< pow << ": \t"
<< result << endl;
return 0;
}
*/
 


/*输出斐波那契数列 ！！！ 
#include <iostream>
using namespace std;

void fab(int next,int sum,int times){
	if(times==3){
		cout<<1<<' '<<1<<' '<<2<<' ';
	}
	if(times>=30){
		return;
	}
	int newsum=next+sum;
	cout<<newsum<<' ';
	fab(sum,newsum,++times);
}

int main(){
	fab(1,2,3);
}
*/

//输出斐波那契数列第20个数
/* 
#include <iostream>
using namespace std;

int newsum;

void fab(int next,int sum,int times){
	if(times>=20){
		return;
	}
	newsum=next+sum;
	fab(sum,newsum,++times);
	
}

int main(){
	fab(1,2,3);
	cout<<newsum<<endl;
}
*/

//输出底数的指数次方的结果
/*
#include<iostream>
using namespace std;
int main()	
{
	int base;
	int exponent;
	int result=1;
	cout<<"enter the base: ";
	cin>>base;
	cout<<"enter the exponent: ";
	cin>>exponent;
	for(int pow=0; pow<exponent; ++pow){
		result*=base;
	}
	cout<<base
	    <<" raised to the power of "
		<<exponent
		<<":\t"
		<<result
		<<endl;
	return 0;
}
*/
/* 
#include<iostream>
#include<string> 
using namespace std;
string s1= "Hello";               //这里定义了一个全局变量global scope 
int main(){
	string s2="world";            //这里是局部变量local scope 
	cout<<s1<<s2<<endl;
	int s1=25;                    //这里定义的局部变量覆盖了之前定义的全局变量 
	cout<<s1<<s2<<endl;
}
*/

/*引用 
#include<iostream>
using namespace std;
int main(){
	int i=42;
	const int &r=42;
	const int &r2=r+i;
	cout<<r2;
}
*/

/*
#include<iostream>
using namespace std;
int main(){
	double dval=3.14;
	const int &ri=dval;
	cout<<ri;
} 
*/

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


/*个人实践版 
#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
 enum color{red,blue,yellow,white,black};
color print;
int j,i,k,n=0,loop;
for(j=red;j<=black;j++)
for(i=red;i<=black;i++)
if(j!=i){
	for(k=red;k<=black;k++)
	if((k!=i)&&(k!=j)){
		n++;
		cout<<setw(3)<<n;
		for(loop=1;loop<=3;loop++){
			switch (loop)
			{
				case 1: print=color(j);break;
				case 2: print=color(i);break;
				case 3: print=color(k);break;
				default:break;
			}
			switch (print)
			{case red:cout<<setw(8)<<"red";break;
			 case blue:cout<<setw(8)<<"blue";break;
			 case yellow:cout<<setw(8)<<"yellow";break;
			 case white:cout<<setw(8)<<"white";break;
			 case black:cout<<setw(8)<<"black";break;
			 default:break;	
			}
		}
	cout<<endl;	
	}
}
cout<<"total:"<<n<<endl;
}
*/


/*复习 
#include <iostream>
using namespace std;
int main()
{
	int base,power=1,index,result=1;
	cout<<"Enter the base:";
	cin>>base;
	cout<<"Enter the power:";
	cin>>index;
	while(power<=index)
	{
		power++;
		result*=base; 
	}
	cout<<"The result is: "<<result<<endl;
}
*/


/*string小练习 1
#include <iostream>
#include <string>
using namespace std;
int main()
{
	string line;
	while(getline(cin,line))
	cout<<line<<endl;
 } 
*/ 

/*string小练习2 
#include <iostream>
#include <string>
using namespace std;     //一般而言应避免使用using指示（using namespace std）而是用using声明（using std::string） 
int main()               //因为若应用程序中使用多个库，使用using容易导致名字冲突 
{
	string word;
	while(cin>>word)
	cout<<word<<endl;
 } 
*/

/*计算出所输入的字符串长度
#include <iostream>
#include <string>
using namespace std;
int main()
{
	string word;
	cin>>word;
	cout<<"The size of the string is "<<word.size()<<" characters, including the newline."
	<<endl;
}
*/


/*string小练习3 
#include <iostream>
#include <string>
using namespace std;
int main()
{
	string line;
	while(getline(cin,line))
	if(line.empty())
	{
	cout<<"The string is empty."<<endl;
    }
	else
	{
	cout<<"The string is not empty."<<endl;
	cout<<"The size of the sting is "<<line.size()<<" characters,including the newline."<<endl;
	} 
 } 
 */
 
/* practice 4 on string 
#include <iostream>
#include <string>
using namespace std;
int main()
{
	string st("Hello world!");
	char x; 
	for(string::size_type n=0; n!=st.size();++n)
	{x=st[n];                     
	//因为下标操作可用于lvalue，因此下标操作可放于复制操作左边或右边 
	 cout<<x<<endl;
    }  
	return 0;
}
*/

/*cctype函数的运用————ispunct(c) 输出一句话中标点符号 
#include <iostream>
#include <string>
#include <cctype> 
using namespace std;
int main()
{
	string s("Hello world!");
	string::size_type punct_cnt=0;
	for(string::size_type index=0; index!=s.size();++index)
	if(ispunct(s[index]))
	    ++punct_cnt;
	cout<<punct_cnt
	    <<"punctuation characters in"<<s<<endl; 
}
*/

/*运用tolower将输入的一行含有大写字母的句子全改写为小写 
	
#include <iostream>
#include <string>
#include <cctype>
using namespace std;
int main()
{
	cout<<"Enter words with  uppercase."<<endl;
	string s;
	while(getline(cin,s))
    {for(string::size_type index=0; index!=s.size();++index)
	    s[index]=tolower(s[index]);
	 cout<<s<<endl;
    } 
	return 0;
 } 
 */
 
 
/*编一个程序读入两个 string 对象，测试它们是否相等,若不相等，则指出两个中哪个较大
 #include <iostream>
 #include <string>
 using namespace std;
 int main()
 {
 	string s1,s2;
 	cin>>s1;
 	cin>>s2;
 	if(s1==s2)cout<<s1<<" is as large as "<<s2<<endl;
 	else if(s1>s2)cout<<s1;
 	else cout<<s2;
  } 
 */
 
 /*比较两个单词哪一个更长 
 #include <iostream>
 #include <string>
 using namespace std;
 int main() 
 {
 	cout<<"Enter in two words to compare the length of them."<<endl;
 	string s1,s2;
	cin>>s1;
	cin>>s2;
	if(s1.size()==s2.size())cout<<"Same.";
	else if(s1.size()>s2.size())cout<<"第一句长度更长。"; 
	else cout<<"第二句更长。"; 
 }
 */
 
 
 /*编一个程序，从标准输入读取多个 string 对象，把它们连接起来存放到一个更大的 string 对象中。
 #include <iostream>
 #include <string>
 using namespace std;
 int main()
 {
 	cout<<"enter strings(Ctrl+Z to end):"<<endl;
 	string s,result_s;
 	while(cin>>s)
 	result_s=result_s+s;
 	cout<<result_s<<endl;
 } 
 */
 
/*将连接后相邻 string 对象以空格隔开
#include <iostream>
#include <string>
using namespace std;
int main()
{
	string result_s,s;
	while(cin>>s)
	result_s=result_s+' '+s;
	cout<<result_s<<endl;
 } 
*/
 
/*从 string 对象中去掉标点符号。
要求输出到程序的字符串必须含有标点符号，输出结果则是去掉标点符号后的 string 对象。  
#include <iostream>
#include <string>
#include <cctype>
using namespace std;
int main() 
{
	string s,rs;
	bool has_punct=false;                  //用于标记字符串中有无标点 
	char ch;
	cout<<"Enter a string:"<<endl;
	getline(cin,s);
	for(string::size_type index=0;index != s.size();++index)//s.size()是一个string::size_type值 
	{
		ch=s[index];
		if(ispunct(ch))                     
		has_punct = true;                  //这里说明输入的这句话中是有标点符号的
		else
		rs +=ch;                           //因此在输出的rs中没有符号，它只是字母与数字的累加 
	}
	if(has_punct)
	cout<<"Result:"<<endl<<rs<<endl;
	else{
	cout<<"No punctuation character in the string?！"<<endl; 
	return -1;
}
return 0;
}
*/ 

/*试验品，将输入的所有数字字符连成一串 
#include <iostream>
#include <vector>
#include <cctype>
using namespace std;
int main()
{
	int n_num;
	int n;
	vector<int> numbers;
	while (cin>>n_num)
	{
		n++;
		numbers.push_back(n_num);
	}
	for(vector<int>::size_type index=0 ;index!=n; index++)
	cout<<numbers[index];
	return 0;
 } 
*/

/*读一组整数到 vector 对象，计算并输出每对相邻元素的
和。如果读入元素个数为奇数，则提示用户最后一个元素
没有求和，并输出其值。
#include <iostream>
#include <vector>
using namespace std;
int main()
{
	vector<int> ivec;
	int num;
	cout<<"Please enter numbers:(Press ctrl+z to end)"<<endl;
	while(cin>>num)
	ivec.push_back(num);
	if(ivec.size()==0)
	{cout<<"No elements?"<<endl;
	 return -1;
    }
	cout<<"The sum of each two adjacent elements in the vector:"<<endl;
	for(vector<int>::size_type ix=0; ix<ivec.size()-1; ix=ix+2)
	{
		cout<<ivec[ix]+ivec[ix+1]<<"\t";
		if((ix+1)%6==0)
		cout<<endl;
    }
	if(ivec.size()%2!=0)
	cout<<endl<<"The last element is not been summed"<<", and its value is "
	    <<ivec[ivec.size()-1]<<endl;
	return 0; 
}
*/



/*修改以上程序 头尾元素两两配对（第一个和最后一个，第二个和倒数第二个，以此类推），
计算每对元素的和，并输出。 

存疑！！ 

#include <iostream>
#include <vector>
using namespace std;
int main()
{
	vector<int> ivec;
	int num;
	cout<<"Please enter numbers:(Press ctrl+z to end)"<<endl;
	while(cin>>num)
	ivec.push_back(num);
	if(ivec.size()==0)
	{cout<<"No elements?"<<endl;
	 return -1;
    }
	cout<<"The sum of each pair of counterpart elements in the vector:"<<endl;
	vector <int>::size_type cnt=0;
	vector <int>::size_type first,last;               //I think we need to add the declarations of "first" and "last" here even though the standard answer does not mentioned, it is strange that in my way the programme can run however in writer's way it cannot.
    for(vector <int>::size_type first=0,last=ivec.size()-1; first<last; ++first,--last)
    {
	    cout<<ivec[first]+ivec[last]<<"\t";
		++cnt;
		if(cnt%6==0) 
		cout<<endl;
	} 
	if(first=last)                //Why the programme can only be compiled when we use "="?
	cout<<endl<<"The center element is not been sumed"<<" and its value is "
	<<ivec[first]<<endl;
	return 0;
}
*/ 


/*Problem: 1.your declarations are too confused!! Your programmes are hard to understand. 
           2.Not familiar with the cctype.
           3.You are not logical when you are programming.You need to be more clear about what you are typing and its function.
#include <iostream>
#include <vector>
#include <string>
#include <cctype>
using namespace std;
int main()
{
	vector<string> svec;
	string word;
	string str;
	cout<<"Enter words(Press Ctrl+z to end)"<<endl;
	while(cin>>word)
	svec.push_back(word);
	if(svec.size()==0)
	{
	    cout<<"No elements?"<<endl;
	    return -1;
	}
    cout<<"Transformed elements from the vector:"<<endl;
	for(vector<string>::size_type ix=0; ix!=svec.size();++ix)
	{
		str=svec[ix];
		for(string::size_type n=0;n!=str.size();++n)
		if(islower(str[n]))
		str[n]=toupper(str[n]);
		cout<<str<<" ";
		if((ix+1)%8==0)
		cout<<endl;
	}
	return 0;
}
*/

/*给定 10 个元素，每个元素值为 42. (1)
#include <iostream>
#include <vector>
using namespace std;
int main()
{
	vector<int> ivec(10);
	for(vector<int>::size_type ix=0;ix<=ivec.size()-1;++ix)
	{
		ivec[ix]=42;
	    cout<<ivec[ix]<<" ";
	    if((ix+1)%8==0)
	    cout<<endl;
	}
	return 0;
  }  
 */
 
 
/*(2)
#include <iostream>
#include <vector>
using namespace std;
int main()
{
	vector<int> ivec;
	for(int ix=1; ix<=10; ++ix)
	ivec.push_back(42);
	for(vector<int>::size_type index=0; index<=ivec.size()-1; ++index)
	//警告：若使用的是！=，则无需-1 
		cout<<ivec[index]<<" ";
}
*/

/* (3)
#include <iostream>
#include <vector>
using namespace std;
int main()
{
	vector<int> ivec(10,42);
 } 
*/

/*10 进制改二进制 
#include<iostream>

using namespace std;
int main(){

    int N;
    cout<<"please input a Integer:"<<endl;
    int aa[20];
    cin>>N;
    int temp;
    temp = N;
    int num;
    int i=0;
    while(temp !=0)
    {
        num = temp%2;
        aa[i] = num;
        i++;
        temp = temp/2;
    }
    for(num=i-1;num>=0;num--)
    {
        cout<<aa[num];
    }
    cout<<endl;
    return 0;
}
*/


/*二进制改十进制
 #include<iostream>
using namespace std;

int main()
{ 
    char buff[64];    // 输入缓存
    int n=0;        // 二进制位数
    int w=1;        // 当前位权重

    int number=0;    // 十进制值

    // 输入
    cout<<"请输入二进制值（最大32位）"<<endl;
    cin>>buff;

    // 获取长度，去除非法数
    char* p=buff;
    while(*p>='0' && *p++<='1') n++; // 只能是1或0----这里注意：后缀++的优先级高于解引用*的优先级
    
    // 转换2进制到10进制
    while(n--)
    {
        number += (buff[n]-'0')*w;
        w*=2;
    }

    // 输出
    cout << "对应的十进制值："<< endl;
    cout<< number<<endl;
    return number;
} 




 
 
