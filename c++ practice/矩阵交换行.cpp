#include <iostream>
#include <iomanip>
using namespace std;
bool deter(int a, int b){                 //检测输入数是否在矩阵范围内 
	if(a>=0&&a<=4&&b>=0&&b<=4){
		return 1;
	}
	else 
	return 0;
} 
int main(){                               
	int a[5][5]; 
	for(int i=0;i<5;i++){                  //输入5x5矩阵 
		for(int j=0;j<5;j++){
			cin>>a[i][j];
		}
	}
	int m,n;         
	cin>>n>>m;
    if(deter(n,m)==0){                      //判定 
    	cout<<"error"<<endl;
	}
	else if(deter(n,m)==1){                   
		for(int i=0;i<5;i++){              //将两行内容依次互换 
			int tmp=a[n][i];
			a[n][i]=a[m][i]; 
			a[m][i]=tmp;
		}
		for(int i=0;i<5;i++){
			for(int j=0;j<5;j++){
				cout<<setw(4)<<a[i][j];    //制表符输出 
			}
			cout<<endl;
		}
	}
}
