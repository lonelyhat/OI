#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	double n,ix;
	while(1)
	{
		cin>>n>>ix;
		if(n==0&&ix==0)
		{
			cout<<"Program terminationed"<<endl; 
			break;
		}
		else
		if((n<0&&ix<=0)||(n<0&&1/ix!=int(1/ix)))
		{
			cout<<"error reinput"<<endl;
			continue;
		}
		if(ix>=1)
		cout<<n<<"\t"<<ix<<"th pow: "<<pow(n,ix)<<endl;
		if(ix<1)
		cout<<n<<"\t"<<ix<<"th root: "<<pow(n,ix)<<endl;
		}
	return 0;
 } 
