#include <iostream>
using namespace std;
int main(){
	int d,h,p,t;
	for(int d=1;d<5;d++){
		for(int h=1;h<5;h++){
			for(int p=1;p<5;p++){
				for(int t=1;t<5;t++){
				/*ö�������п�����*/ 
					if(d!=h&&h!=p&&p!=t&&t!=d&&h!=t&&d!=p){
						if(((d==1)+(h==4)+(p==3)==1)
						&&((d==4)+(h==1)+(p==2)+(t==3)==1)
						&&((d==3)+(h==4)==1)
						&&((d==3)+(h==2)+(p==1)+(t==4)==1))
				/*ɸѡ�����ظ����ε������������ÿ��ֻ��һ����ȷ�Ĳ�����
			    ɸѡ��������Щ���������*/ 
						cout<<d<<' '<<h<<' '<<p<<' '<<t<<endl;
					}
				}
			}
		}
	}
	return 0;
} 
