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
