#include <iostream>
using namespace std;
int main()
{
	int N;
	int i; 
	double a[1000];  //Cannot write that:int N;cin>>N;double a[N]; Since the array is still
	cin>>N; 
	cout<<"Enter "<<N<<" numbers: "<<endl;
	for(i=0;i<N;i++)
	{
		cin>>a[i];
	}
	for(i=0;i<N-1;i++)
	{
		for(int j=0;j<N-1-i;j++) 
		{
			if(a[j]>a[j+1])
			{
				int tmp;             //exchange a[j]&a[j+1] positions
				tmp=a[j+1];
				a[j+1]=a[j];
				a[j]=tmp;
				
			}
		}
    }
	for(i=0;i<N;i++)
	cout<<a[i]<<" ";
	return 0;
}
