#include <iostream>
#include <vector>
 
using namespace std;
 
int main()
{
    vector<int>v(120); 
    int i, data, n, m;
    cin >> n >> m;
    for(i = 0; i < n; i++)
        cin >> v[i];
    for(i = 0; i < n - m; i++)       //���ƶ��󲻻������һ���ַ����vector�еĺ��� 
        v[i+n] = v[i];
    for(i = n-m; i < n; i++)          //(i+m)%n������˼�λ��������ľ��Ƕ�Ӧ����λ�ã�������v[0]��v[m-1]���ź��� 
        v[(i+m)%n] = v[i];             
    for(i = m; i < n; i++)            //�ٴ�V[m]��ʼ����֮ǰ�洢�ں������һ�ε������� 
        v[i] = v[i+n-m];
        
    for(i = 0; i < n; i++)     //��� 
        cout << v[i] << " ";
    return 0;
}//�˳�����ȫ����������ʵ�֣�����vector 
