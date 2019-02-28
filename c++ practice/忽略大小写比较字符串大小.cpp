#include <iostream>
using namespace std;
int main(){
	char s1[80];
	char s2[80];
	cin.getline(s1,80);
	cin.getline(s2,80);
	for(int i=0;i<80;i++){
		if(s1[i]!='\0'){
			s1[i]=tolower(s1[i]);
		}
		if(s2[i]!='\0'){
			s2[i]=tolower(s2[i]);
		}
	}
	int i=0;
	char result;
	while (s1[i] != '\0' && (s1[i] == s2[i])){
    i++;
    }
    if (s1[i] > s2[i]) {
    result = '>';
    }
	else if (s1[i] < s2[i]) {
    result = '<';
    } 
	else{
    result = '=';
    }
    cout<<result; 
}
