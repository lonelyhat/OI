#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
	int i,j,k,n=0,loop;
	enum colour{red,blue,yellow,black,white};
	colour pri;
	for(int i=red;i<=white;i++)
	for(int j=red;j<=white;j++)
	if(i!=j){
		for(int k=red;k<=white;k++)
		if((k!=i)&&(k!=j))
		{n=n+1;
		cout<<setw(3)<<n;
		for(loop=1;loop<=3;loop++)
	    {switch(loop)
	    {case 1:pri=colour(i);break; 
	    case 2:pri=colour(j);break;
		case 3:pri=colour(k);break;
		default: break; 
		}
		switch(pri)
		{case red:cout<<setw(8)<<"red";break;
		case blue:cout<<setw(8)<<"blue";break;
		case yellow:cout<<setw(8)<<"yellow";break;
		case black: cout<<setw(8)<<"black";break;
		case white: cout<<setw(8)<<"white";break; 
		default:break;
	    } 
	}
	cout<<endl;
	}
 } 
 cout<<"total: "<<n<<endl;
}
