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
