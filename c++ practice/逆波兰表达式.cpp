#include <iostream>
#include <cmath> 
using namespace std;
double notation(){
	char str[10];
	cin>>str;
	switch(str[0])
	{
		case'+': return notation()+notation();
		case'-': return notation()-notation();
		case'*': return notation()*notation();
		case'/': return notation()/notation();
		default:return atof(str); //��char����ת��Ϊint���� 
	}
} 
int main(){
	cout<<notation();
	return 0;
}
