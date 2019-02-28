//To prove that a[m*n]==b[m][n]; 
#include <iostream>
using namespace std;
int main()
{
	const int m=2,n=3;
	int i,j,x=1;
	int a[m*n];
	int b[m][n];
	for(i=0;i<6;i++,x++)
	{
		a[i]=x;
	}
	x=1;
	for(i=0;i<2;i++)
	{
		for(j=0;j<3;j++,x++)
		{
			b[i][j]=x;
			cout<<a[i*n+j]<<"\t"<<b[i][j]<<endl;
	    }
	}
	return 0;
}

