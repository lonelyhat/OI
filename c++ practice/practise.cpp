//#include<iostream>
//using namespace std;

/*��50�ӵ�100�ĺ�
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

/*cout��10��0�������֣���ʹ�䰴�Ӵ�С˳�����У�while�� 
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

/*���������10��0���������� ��for�� 
int main()
{
	int n=10,a;
	for(int i=0; i<=10; ++i){
		a=n-i;
	    cout<<a<<endl;
	}
}
*/

/*�Ƚ���������С��������ӽ�С���ӵ��ϴ����ĺ� 
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
int main()       //���һ�������и������� 
{
	int a; int i=0;
	cout<<"Enter a group of mubers"<<endl;
	while(cin>>a){   //����һ������ 
		if(a<0){     //�ж��Ƿ�Ϊ���� 
		++i;
	}
	}
	cout<<i<<endl;    //��� 
}
*/
/*����������������������������н�С����С�����нϴ��������������� 
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

/*��if��д����һ������ 
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

/*��һ����ʽ 
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
/*��while��д 
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

/*�ַ�������ֵ������ *2

int main(){
	cout << "multi-line " L"literal " <<endl;
}                               //�˳�����δ���壬���ܲ���һ��û���õ�ֵ���±��� 
 
int main()
{
   cout << "a multi-line "
"string literal "
"using concatenation"
<<endl;
}                
*/

//����2��10�η����������ƽ� 
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
 
//����2��10�η���������(ע���˴�cntΪcount��д�� 
/*
int main()
{                                       // local objects of type int
int value = 2;
int pow = 10;
int result = 1;                         // repeat calculation of result until cnt is equal to pow                                  
for (int cnt = 0; cnt != pow; ++cnt)    //why use "!=" �� can we replace it with " < " or "<="? Are they have the same function here?
//"��="&"<" can be replaced by each other in C++ language. 
result *= value;                        // result = result * value;
cout << value
<< " raised to the power of "
<< pow << ": \t"
<< result << endl;
return 0;
}
*/
 


/*���쳲��������� ������ 
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

//���쳲��������е�20����
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

//���������ָ���η��Ľ��
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
string s1= "Hello";               //���ﶨ����һ��ȫ�ֱ���global scope 
int main(){
	string s2="world";            //�����Ǿֲ�����local scope 
	cout<<s1<<s2<<endl;
	int s1=25;                    //���ﶨ��ľֲ�����������֮ǰ�����ȫ�ֱ��� 
	cout<<s1<<s2<<endl;
}
*/

/*���� 
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
***************************************��Ŀ*******************************************
�ڴ����к졢�ơ������ס���5����ɫ�������ɸ���ÿ�δӿڴ�������ȡ��3�����ʵõ�3�ֲ�ͬ��ɫ����Ŀ���ȡ�������ÿ�����е������
����

#include <iostream>
#include <iomanip>                             //�����ʱҪ�õ�setw���Ʒ�
using namespace std;
int main( )
{ enum color {red,yellow,blue,white,black};    //����ö������color
color pri;                                     //����color���͵ı���pri
int i,j,k,n=0,loop;                            //n���ۼƲ�ͬ��ɫ�������
for (i=red;i<=black;i++)                       //��iΪĳһ��ɫʱ
for (j=red;j<=black;j++)                       //��jΪĳһ��ɫʱ
if (i!=j)                                      //��ǰ���������ɫ��ͬ
{ for (k=red;k<=black;k++)                     //ֻ��ǰ���������ɫ��ͬ������Ҫ����3�������ɫ
if ((k!=i) && (k!=j))                          //3�������ɫ����ͬ
{n=n+1;                                        //ʹ�ۼ�ֵn��1
cout<<setw(3)<<n;                              //�����ǰ��nֵ���ֶο��Ϊ3
for (loop=1;loop<=3;loop++)                    //�Ⱥ��3����������
{switch (loop)                                 //loop��ֵ�Ⱥ�Ϊ1,2,3
{case 1: pri=color(i);break ;                  //color(i)��ǿ������ת����ʹpri��ֵΪi
case 2: pri=color(j);break ;                   //ʹpri��ֵΪj
case 3: pri=color(k);break ;                   //ʹpri��ֵΪk
default :break ;
}
switch (pri)                                   //�ж�pri��ֵ�������Ӧ�ġ���ɫ��
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
cout<< "total :"<<n<<endl;                     //���������������ϵĸ���
return 0;
}
*/


/*����ʵ���� 
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


/*��ϰ 
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


/*stringС��ϰ 1
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

/*stringС��ϰ2 
#include <iostream>
#include <string>
using namespace std;     //һ�����Ӧ����ʹ��usingָʾ��using namespace std��������using������using std::string�� 
int main()               //��Ϊ��Ӧ�ó�����ʹ�ö���⣬ʹ��using���׵������ֳ�ͻ 
{
	string word;
	while(cin>>word)
	cout<<word<<endl;
 } 
*/

/*�������������ַ�������
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


/*stringС��ϰ3 
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
	//��Ϊ�±����������lvalue������±�����ɷ��ڸ��Ʋ�����߻��ұ� 
	 cout<<x<<endl;
    }  
	return 0;
}
*/

/*cctype���������á�������ispunct(c) ���һ�仰�б����� 
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

/*����tolower�������һ�к��д�д��ĸ�ľ���ȫ��дΪСд 
	
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
 
 
/*��һ������������� string ���󣬲��������Ƿ����,������ȣ���ָ���������ĸ��ϴ�
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
 
 /*�Ƚ�����������һ������ 
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
	else if(s1.size()>s2.size())cout<<"��һ�䳤�ȸ�����"; 
	else cout<<"�ڶ��������"; 
 }
 */
 
 
 /*��һ�����򣬴ӱ�׼�����ȡ��� string ���󣬰���������������ŵ�һ������� string �����С�
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
 
/*�����Ӻ����� string �����Կո����
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
 
/*�� string ������ȥ�������š�
Ҫ�������������ַ������뺬�б����ţ�����������ȥ�������ź�� string ����  
#include <iostream>
#include <string>
#include <cctype>
using namespace std;
int main() 
{
	string s,rs;
	bool has_punct=false;                  //���ڱ���ַ��������ޱ�� 
	char ch;
	cout<<"Enter a string:"<<endl;
	getline(cin,s);
	for(string::size_type index=0;index != s.size();++index)//s.size()��һ��string::size_typeֵ 
	{
		ch=s[index];
		if(ispunct(ch))                     
		has_punct = true;                  //����˵���������仰�����б����ŵ�
		else
		rs +=ch;                           //����������rs��û�з��ţ���ֻ����ĸ�����ֵ��ۼ� 
	}
	if(has_punct)
	cout<<"Result:"<<endl<<rs<<endl;
	else{
	cout<<"No punctuation character in the string?��"<<endl; 
	return -1;
}
return 0;
}
*/ 

/*����Ʒ������������������ַ�����һ�� 
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

/*��һ�������� vector ���󣬼��㲢���ÿ������Ԫ�ص�
�͡��������Ԫ�ظ���Ϊ����������ʾ�û����һ��Ԫ��
û����ͣ��������ֵ��
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



/*�޸����ϳ��� ͷβԪ��������ԣ���һ�������һ�����ڶ����͵����ڶ������Դ����ƣ���
����ÿ��Ԫ�صĺͣ�������� 

���ɣ��� 

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

/*���� 10 ��Ԫ�أ�ÿ��Ԫ��ֵΪ 42. (1)
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
	//���棺��ʹ�õ��ǣ�=��������-1 
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

/*10 ���ƸĶ����� 
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


/*�����Ƹ�ʮ����
 #include<iostream>
using namespace std;

int main()
{ 
    char buff[64];    // ���뻺��
    int n=0;        // ������λ��
    int w=1;        // ��ǰλȨ��

    int number=0;    // ʮ����ֵ

    // ����
    cout<<"�����������ֵ�����32λ��"<<endl;
    cin>>buff;

    // ��ȡ���ȣ�ȥ���Ƿ���
    char* p=buff;
    while(*p>='0' && *p++<='1') n++; // ֻ����1��0----����ע�⣺��׺++�����ȼ����ڽ�����*�����ȼ�
    
    // ת��2���Ƶ�10����
    while(n--)
    {
        number += (buff[n]-'0')*w;
        w*=2;
    }

    // ���
    cout << "��Ӧ��ʮ����ֵ��"<< endl;
    cout<< number<<endl;
    return number;
} 




 
 
