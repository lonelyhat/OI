#include <iostream>
using namespace std;
int main(){
	int n;       //n为细菌数量 
	cin>>n;
	double a[100][4];
	for(int i=0;i<n;i++){
		cin>>a[i][0]>>a[i][1]>>a[i][2];   //0为细菌编号，1为初始量，2为终末量，3为rate 
		a[i][3]=a[i][2]/a[i][1];
	}
	//对所有组排序 
	for(int j=1;j<n;j++){
		for(int i=j;i>0;i--){
			if(a[i][3]<a[i-1][3]){
			int tmp0=a[i][0];
			a[i][0]=a[i-1][0];
			a[i-1][0]=tmp0;
			int tmp3=a[i][3];
			a[i][3]=a[i-1][3];
			a[i-1][3]=tmp3;
			int tmp1=a[i][1];
			a[i][1]=a[i-1][1];
			a[i-1][1]=tmp1;
			int tmp2=a[i][2];
			a[i][2]=a[i-1][2];
			a[i-1][2]=tmp2;
		    }
		}
	}      
	for(int i=0;i<n;i++){
		cout<<a[i][0]<<' ';
	}  
	cout<<endl;  
	//记录最大差，以分出AB两种 
	double maxdiff=0;
	int maxdiffindex=0;   //最大差下标 
	for(int i=1;i<n;i++){
		double diff=a[i][3]-a[i-1][3];
		if(diff>maxdiff){
			maxdiff=diff;
			maxdiffindex=i;
		}
	}
	cout<<n-maxdiffindex<<endl;      //输出A种个数 
	for(int i=maxdiffindex;i<n;i++){ //A种组别 
		cout<<a[i][0]<<endl;
	}
	cout<<maxdiffindex<<endl;            //B种个数 
	for(int i=0;i<maxdiffindex;i++){     //B种组别 
		cout<<a[i][0]<<endl;
	}
	return 0;
}
