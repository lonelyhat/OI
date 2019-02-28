#include <iostream>
using namespace std;
int main()
{ 
	char words[100];
	char a;
	int i,n;
	cin>>words[100];
	for(i=0;i<=100;i++)
	{
		a=words[i];
	    if(((a>='A')&&(a<='Z'))||((a>='a')&&(a<='z'))){
	    n=n+0;
		}
	    else
	    n++;
	}
	if(n==0)
	cout<<"English"<<endl;
	else
	cout<<"l33t"<<endl;
}
