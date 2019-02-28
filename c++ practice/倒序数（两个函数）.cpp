#include <iostream>
#include <cmath>
using namespace std;
int inverse(int x,int y)
{
	int digit,sum=0;
	while(x>0)
	{
		digit=x%10;
		sum=sum+digit*pow(10,y-1);
		y-=1;
		x=x/10;
	}
	return (sum);
 } 
 
int main()
{
	int n,index,newn;
	cin>>n>>index;
	newn=inverse(n,index);
	cout<<newn<<endl;
	return 0;
}
