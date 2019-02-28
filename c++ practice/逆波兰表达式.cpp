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
		default:return atof(str); //将char类型转换为int类型 
	}
} 
int main(){
	cout<<notation();
	return 0;
}
