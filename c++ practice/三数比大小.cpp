#include <iostream>
using namespace std;
int main()
{
	double a,b,c,max,mid,min;
	cin>>a>>b>>c;
	if(a>b)
	{
		if(a>c){
			max=a;
			if(b>c)
			{
				mid=b;
				min=c;
			}
		
		}
		else{
			max=c;
			mid=a;
			min=b;
		}
	}
	else
	{
		if(b<c){
			max=c;
			mid=b;
			min=a;
		}
		
		else{
			max=b;
			if(a>c)
			{
				mid=a;
				min=c;
			}
			else
			{
				mid=c;
				min=a;
			 } 
			
		}
	}
	cout<<max<<" "<<mid<<" "<<min<<endl;
	return 0;
 } 
