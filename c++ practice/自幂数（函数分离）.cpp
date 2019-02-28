#include <iostream>
#include <cmath>
using namespace std;
void self(int y)
{	int start,end,m,digit,sum,_sum,i;
    while(y>0)
	{
     	start=pow(10,y-1);
	    end=pow(10,y)-1;
	    for(i=start;i<=end;i++)
	    {
		   m=i;
		   sum=0;
		   while(m!=0)
	   	   {
		    digit=m%10;
		    sum=sum+pow(digit,y);
		    m=m/10; 
	       }
	       if(sum==i)
	       {
	       	cout<<i<<" ";
		   }
	    }
	    break;
	}
 } 
 int main()
 { 
 	int n;
 	cin>>n;
 	self(n);
 }

