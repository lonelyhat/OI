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




 
 
