#include <iostream>
using namespace std;
int main(){
	int N; 
	int a,b,c,d,cube;
	cin>>N;
	for(a=2;a<=N;a++){
		for(b=2;b<=a-1;b++){
			for(c=b;c<=a-1;c++){
				for(d=c;d<=a-1;d++){
					cube=a*a*a;
					if(cube==b*b*b+c*c*c+d*d*d)
					{
						cout<<"Cube= "<<a<<","<<"Triple= ("<<b<<","<<c<<","<<d<<")"<<endl;
					}
				}
			}
		}
	}
	return 0;
}
