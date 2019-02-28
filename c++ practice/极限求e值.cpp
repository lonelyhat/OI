#include <iostream>
using namespace std;
int main()
{
	double e=1.0,u=1.0;
	int n=1;
	while(u>=1.0E-7)
	{
		u=u/n;
		e+=u;
		n+=1;
	}
	cout<<"e="<<e<<"(n="<<n<<")"<<endl; 
}
