#include <iostream>
using namespace std;
int main()
{
	const int x=3,y=3,z=3;
	int i,j,k,n=1;
	int a[x*y*z]; 
	int b[x][y][z];
	for(i=0;i<27;i++,n++)
	{
		a[i]=n;
	}
	n=1;
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			for(k=0;k<3;k++,n++)
			{
				b[i][j][k]=n;
				cout<<a[y*z*i+z*j+k]<<"\t"<<b[i][j][k]<<endl;
			}
		}
	}
	return 0;
}
