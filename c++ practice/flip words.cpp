#include <iostream>
using namespace std;
void flip(char str[],int i)
{
	if(str[i]=='\0'){
		return;
	}
	else {
		flip(str,i+1);
	}
	cout<<str[i];
	return;
 } 
int main(){
	char s[501],word[500];
	cin.getline(s,500,'\n');
	int j=0;
	for(int i=0;s[i]!='\0';i++){
		if(s[i]==' '){
			word[j]='\0';
			flip(word,0);
			cout<<" ";
			j=0;
		}
		else 
		{
			word[j]=s[i];
			j++;
		}
	} 
	word[j]='\0';
	flip(word,0);
	cout<<endl;
	return 0;
}
