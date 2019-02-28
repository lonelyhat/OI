#include <iostream>
using namespace std;
int main(){
	int n;
	cin>>n;
	int count=0;
	int a[256][256];
	for(int i=0;i<n;i++){            //输入矩阵 
		for(int j=0;j<n;j++){
			cin>>a[i][j];
		}
	}
	for(int i=1;i<n-1;i++){
		for(int j=1;j<n-1;j++){
			if(((a[i][j]-a[i-1][j])<=-50)&&((a[i][j]-a[i+1][j])<=-50)&&((a[i][j]-a[i][j-1])<=-50)&&((a[i][j]-a[i][j+1])<=-50)){
				//检测细胞与上下左右的差值是否大于50 
				count++;
			}
		}
	}
	cout<<count;
}
