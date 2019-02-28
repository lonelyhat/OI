#include<iostream>
using namespace std;
int main(){
	int side = 6;
	double dist[100];
	for(int i=1; i<=side; i++){
		for(int j=1; j<=side; j++){
			for(int k=1;k<=side;k++){
				dist[i+j+k]+=1.0;
			}
		}
	}
	for(int k=3; k<=3*side; k++){
		dist[k] /= 216.0; 
	}
	for(int i=3; i<=3*side; i++){
		cout<<i<<": "<<dist[i]<<endl;
	}
}
