#include <iostream>
using namespace std;
bool com(int a[],int x,int y){  //�ж��Ƿ�a[y]��a[x]С 
	if(a[x]>a[y]){
		return true; 
	}
	else 
	return false;
} 
void exch(int a[],int i,int j){ //������ֵ 
	int temp=a[i];
	a[i]=a[j];
	a[j]=temp;
}

//ѡ������ 
void selection_sort(int r[],int a,int b){
	int v;
	int min;
	for(v=a;v<b;v++){
		min=v;                 //�ҵ���С���±� 
		for(int w=v+1;w<b;w++){
			if(com(r,min,w)){       //�Ƚ�����������һ������С������һ����С���򽻻������±꣬���ҳ������Χ�ڣ�v~b)��С���±� 
				min=w;
			}
		}
		exch(r,v,min);            //���±꽻�������������е�λ�� 
	}
}

//�������� 
void insertion_sort(int r[],int a,int b){
	int v;
	for(v=a+1; v<b;v++){        
		for(int w=v;w>=a+1&&com(r,w-1,w);w--){         //��r[a+1]��ʼ��֮ǰ�������Ƚϣ���С�������佻����ֱ��֮ǰ����������֮ǰû������Ϊֹ 
			exch(r,w-1,w);	
		}
	}
}

//ϣ������ (������ֻ������a=0) 
void shell_sort(int r[],int a,int b){
	int gap;
	for(gap=a+1;gap<b/3;gap=3*gap+1);          //�󲽳�����������ٸ����ֽ��в������򣬼����ٸ�Ԫ��
	while(gap>=a+1){                       //��ֹ���� 
		for(int i=gap;i<b;i++){                       //��ÿ��Ԫ�ؽ��в������򣬴�ʱ��������Ƚϵļ��Ϊ�����
			for(int j=i;j>=gap&&com(r,j-gap,j);j-=gap){            
				exch(r,j,j-gap);
			}
		}
		gap/=3;
	}
} 

//�鲢����
void merge(int a[],int low, int mid,int high){
	int i=low,j=mid+1,p=high;
	int aux[p];
	for(int k=low;k<=high;k++){
		aux[k]=a[k];
	}
	for(int k=low;k<=high;k++){
		if(i>mid)  a[k]=aux[j++];            //�������������Ԫ���þ���ȡ�Ұ�� 
		else if (j>high) a[k]=aux[i++];       //����������Ұ��Ԫ���þ���ȡ���� 
		else if (com(aux,i,j)) a[k]=aux[j++];
		else a[k]=aux[i++];
	}	
} 
void merge_sort(int r[],int low,int high){
	if (high<=low) return;     //���Ϸֳ�������С����ֱ��������ֻ��һ��Ԫ�� 
	int mid=(low+high)/2;       //��ֽ���                        
	merge_sort(r,low,mid);      //�ݹ飬������������ߵ��������� 
	merge_sort(r,mid+1,high);   //�ݹ飬���������ұߵ��������� 
	merge(r,low,mid,high);      //������������õ��������� 
} 


//��������1
int partition(int ar[],int left, int right){
	int i=left,j=right;           //��������ָʾi=left,j=right 
	int tmp=ar[left];             //��ar[left]Ϊ��׼�� 
	while(i<j){                     
		while(i<j&&ar[j]>tmp){
			j--;                  //�Ӻ���ǰѰ�ұȻ�׼�����Ԫ�� �������Ȼ�׼��С���� 
		}
		if(i<j){                 
			ar[i]=ar[j];         //���ҵ���Ԫ������մ�����ѡΪ��׼����λ�ã� 
			i++;                 //���ָ��ָ����һ��λ�ã�������ľͲ����ٱ����ҵ��� 
		}
		while(i<j&&ar[i]<tmp){    
			i++;                 //��ǰ����Ѱ�ұȻ�׼��С��Ԫ�� �������Ȼ�׼������� 
		}                        
		if(i<j){                  
			ar[j]=ar[i];         //���ҵ���Ԫ������մ� 
			j--;                 //�Ҷ�ָ��ָ����һλ 
		}
	}
	ar[i]=tmp;                   //���i==j,a[i]��a[j]Ϊ��׼����λ�����·��� 
	
	return i;                    //����׼����λ�÷��� 
} 

void quick_sort(int ar[],int left,int right){
	if(left>right){
		return;
	}
	int j=partition(ar,left, right);         
	quick_sort(ar,left,j-1);          //�ֱ�Ի�׼��������������һ��ͬ���Ĳ��� 
	quick_sort(ar,j+1,right);         //�Ի�׼���Ҳ����������һ��ͬ���Ĳ��� 
}

//��������2
void quicksort(int a[], int left, int right){
	int i=left, j=right;
	int tmp;
	int pivot=a[(left+right)/2];
	while(i<=j){
		while (a[i]<pivot)
		    i++;
		while (a[j]>pivot)
		    j--;
		if(i<=j){
			tmp=a[i];
			a[i]=a[j];
			a[j]=tmp;
			i++;
			j--;
		}
	}
	if(left<j) quicksort(a,left,j);
	if(i<right) quicksort(a,i,right); 
} 


 
//������ 
int main(){
	int ar[1000];
	int n;
	cin>>n;
	for(int i=0;i<n;i++){
		cin>>ar[i];
    }
 	quicksort(ar,0,n-1);
	for(int i=0;i<5;i++){
		cout<<ar[i]<<' ';
	}
}
