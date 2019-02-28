#include <iostream>
#include <string>
#include <cctype>
using namespace std;
int main()
{
	string s;
	char Ex;
	cout<<"Enter your words: "<<endl;
	while(getline(cin,s)){
		int k;
		cout<<"Enter a number: "<<endl;
		cin>>k;
		if(s.empty()){
			cout<<"No input!";
			break;
		}
		for(string::size_type ix=0;ix<=s.size()-1;ix++){
			if(isalnum(s[ix])){
				s[ix]=tolower(s[ix]);
				if(((s[ix]-'a')-k)>=0){
					Ex=s[ix]-k;
				} 
				else
			    Ex=(123+((s[ix]-'a')-k));
				
		    }
		    else
		    Ex=s[ix];
			cout<<Ex;
		}
		cout<<endl;
		break;
	}

}
