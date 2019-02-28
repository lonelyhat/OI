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




 
 
