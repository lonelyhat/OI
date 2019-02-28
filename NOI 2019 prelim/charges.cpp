#include<iostream>
using namespace std;
int main(){
	int n,q;
	cin>>n>>q;
	int sign[n][n];
	for(int i=0;i<n;i++){
		for(int j = 0;j<n;j++){
			sign[i][j] = -1;
		}
	}
	char t;
	int a,b;
	char ans[q];
	int count = 0;
	for(int i =0;i<q;i++){
		cin>>t>>a>>b;
		if(t == 'R'){
			if(sign[a-1][b-1]==-1){
				sign[a-1][b-1] = 0; //0 repel, 1 attract
				sign[b-1][a-1] = 0;
				sign[b-1][b-1] = 0;
				sign[a-1][a-1] = 0;
				for(int j=0;j<n;j++){
					for(int k = 0; k<n;k++){
						if(sign[a-1][j] == 0){
							sign[j][b-1] = 0;
							sign[b-1][j] = 0;
						}
						if(sign[b-1][k] == 0){
							sign[k][a-1] = 0;
							sign[a-1][k] = 0;
						}
						if(sign[a-1][j] == 1){
							sign[j][b-1] = 1;
							sign[b-1][j] = 1;
						}
						if(sign[b-1][k] == 1){
							sign[k][a-1] = 1;
							sign[a-1][k] = 1;
						}
						if(sign[a-1][j] == 0 && sign[b-1][k] == 0){
							sign[j][k] = 0;
							sign[k][j] = 0;
						}
						else if(sign[a-1][j] == 1 && sign[b-1][k] == 0){
							sign[j][k] = 1;
							sign[k][j] = 1;
						}
						else if(sign[a-1][j] == 0 && sign[b-1][k] == 1){
							sign[j][k] = 1;
							sign[k][j] = 1;
						}
						else if(sign[a-1][j] == 1 && sign[b-1][k] == 1){
							sign[j][k] = 0;
							sign[k][j] = 0;
						}
					}
				}
				
			}
			for(int x = 0 ;x<n;x++){
				for(int y = 0;y<n;y++){
					cout<<sign[x][y]<<" ";
				}
				cout<<endl;
			} // visualizer 
		}
		else if(t == 'A'){
			if(sign[a-1][b-1] == -1){
				sign[a-1][b-1] = 1;
				sign[b-1][a-1] = 1;
				sign[b-1][b-1] = 0;
				sign[a-1][a-1] = 0;
				for(int j=0;j<n;j++){
					for(int k = 0; k<n;k++){
						if(sign[a-1][j] == 0){
							sign[j][b-1] = 1;
							sign[b-1][j] = 1;
						}
						if(sign[b-1][k] == 0){
							sign[k][a-1] = 1;
							sign[a-1][k] = 1;
						}
						if(sign[a-1][j] == 1){
							sign[j][b-1] = 0;
							sign[b-1][j] = 0;
						}
						if(sign[b-1][k] == 1){
							sign[k][a-1] = 0;
							sign[a-1][k] = 0;
						}
						if(sign[a-1][j] == 0 && sign[b-1][k] == 0){
							sign[j][k] = 1;
							sign[k][j] = 1;
						}
						else if(sign[a-1][j] == 1 && sign[b-1][k] == 0){
							sign[j][k] = 0;
							sign[k][j] = 0;
						}
						else if(sign[a-1][j] == 0 && sign[b-1][k] == 1){
							sign[j][k] = 0;
							sign[k][j] = 0;
						}
						else if(sign[a-1][j] == 1 && sign[b-1][k] == 1){
							sign[j][k] = 1;
							sign[k][j] = 1;
						}
					}
				}
			}
			for(int x = 0 ;x<n;x++){
				for(int y = 0;y<n;y++){
					cout<<sign[x][y]<<" ";
				}
				cout<<endl;
			} // visualizer 
		}
		else if(t == 'Q'){
			for(int x = 0 ;x<n;x++){
				for(int y = 0;y<n;y++){
					cout<<sign[x][y]<<" ";
				}
				cout<<endl;
			} // visualizer 
			if(sign[a-1][b-1] == 0 ){
				ans[count] = 'R';
				count++;
			}
			else if(sign[a-1][b-1]==1){
				ans[count] = 'A';
				count++;
			}
			else{
				ans[count] = '?';
				count++;
			}
		}
	}
	if(count!=0){
		for(int i=0;i<count;i++){
			if(i!=count){
				cout<<ans[i]<<endl;
			}
			else{
				cout<<ans[i];
			}
		}
	}
}
