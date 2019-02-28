#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	int n,ix,temp;
	int sum;
	cin>>n>>ix;
	while(n!=0)
	{
		temp=n%10;
		sum=sum+temp*pow(10,ix-1);
		ix-=1;
		n=n/10;
	}
	cout<<sum;
	return 0;
}
