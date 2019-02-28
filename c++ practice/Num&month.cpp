#include <iostream>
#include <string>
using namespace std;
int main()
{
	int n;
	string month[12]{
	"Jan",
	"Feb",
	"March",
	"April",
	"May",
	"June",
	"July",
	"Aug",
	"Sep",
	"Oct",
	"Nov",
	"Dec"};
	cin>>n;
	if((n>0)&&(n<=12))
	cout<<month[n-1];
}
