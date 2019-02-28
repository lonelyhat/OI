#include <iostream>
using namespace std;
int main()
{
	char a;
	int count;
	int n;
	cin>>n;
	char ar[1000000];
	for(int i=0;i<n;i++)
	{
		cin>>ar[i];
	}
	
	for(int i=n-1;i>=0;i--)
	{
		cout<<ar[i];
	}
	
}
