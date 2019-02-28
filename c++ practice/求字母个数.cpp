#include <iostream> 
#include <string>
using namespace std;
const int counts=80;
int main(){
	char s[counts];
	int c[5]={0};
	cin.getline(s,counts);
	for(int i=0;i<counts;i++){
		if(s[i]=='a'){
		   c[0]++;
		}
		else if(s[i]=='e'){
			c[1]++;
		}
		else if(s[i]=='i'){
		    c[2]++; 
	    } 
	    else if(s[i]=='o'){
	    	c[3]++;
		}
		else if(s[i]=='u'){
			c[4]++;
		} 
    }
    for(int i=0;i<5;i++){
    	cout<<c[i]<<' ';
	}
}
