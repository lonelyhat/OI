#include <iostream>
#include <iomanip>
using namespace std;
bool deter(int a, int b){                 //����������Ƿ��ھ���Χ�� 
	if(a>=0&&a<=4&&b>=0&&b<=4){
		return 1;
	}
	else 
	return 0;
} 
int main(){                               
	int a[5][5]; 
	for(int i=0;i<5;i++){                  //����5x5���� 
		for(int j=0;j<5;j++){
			cin>>a[i][j];
		}
	}
	int m,n;         
	cin>>n>>m;
    if(deter(n,m)==0){                      //�ж� 
    	cout<<"error"<<endl;
	}
	else if(deter(n,m)==1){                   
		for(int i=0;i<5;i++){              //�������������λ��� 
			int tmp=a[n][i];
			a[n][i]=a[m][i]; 
			a[m][i]=tmp;
		}
		for(int i=0;i<5;i++){
			for(int j=0;j<5;j++){
				cout<<setw(4)<<a[i][j];    //�Ʊ����� 
			}
			cout<<endl;
		}
	}
}
