#include <iostream>
using namespace std;
char* ltrim(char s[]){
	int k,j;
	k=0;
	while(s[k]==' '){
	k++; 
    }
    j=k;
    while(s[j]!='\0'){
    	s[j-k]=s[j];
    	j++;
	}
	s[j-k]='\0';
	return &s[0];
}
int main(){
	char str[100];
	cin.getline(str,99);
	cout<<str<<endl;
	cout<<ltrim(str);
}
