#include <iostream>
using namespace std;
bool com(int a[],int x,int y){  //判断是否a[y]比a[x]小 
	if(a[x]>a[y]){
		return true; 
	}
	else 
	return false;
} 
void exch(int a[],int i,int j){ //交换数值 
	int temp=a[i];
	a[i]=a[j];
	a[j]=temp;
}

//选择排序 
void selection_sort(int r[],int a,int b){
	int v;
	int min;
	for(v=a;v<b;v++){
		min=v;                 //找到最小数下标 
		for(int w=v+1;w<b;w++){
			if(com(r,min,w)){       //比较现有数与下一个数大小，若下一个数小，则交换两数下标，以找出这个范围内（v~b)最小数下标 
				min=w;
			}
		}
		exch(r,v,min);            //按下标交换两数在数组中的位置 
	}
}

//插入排序 
void insertion_sort(int r[],int a,int b){
	int v;
	for(v=a+1; v<b;v++){        
		for(int w=v;w>=a+1&&com(r,w-1,w);w--){         //从r[a+1]开始与之前所有数比较，若小于则与其交换，直到之前的数比其大或之前没有数字为止 
			exch(r,w-1,w);	
		}
	}
}

//希尔排序 (此排序只适用于a=0) 
void shell_sort(int r[],int a,int b){
	int gap;
	for(gap=a+1;gap<b/3;gap=3*gap+1);          //求步长，即相隔多少个数字进行插入排序，即多少个元素
	while(gap>=a+1){                       //终止条件 
		for(int i=gap;i<b;i++){                       //对每个元素进行插入排序，此时插入排序比较的间隔为步长�
			for(int j=i;j>=gap&&com(r,j-gap,j);j-=gap){            
				exch(r,j,j-gap);
			}
		}
		gap/=3;
	}
} 

//归并排序
void merge(int a[],int low, int mid,int high){
	int i=low,j=mid+1,p=high;
	int aux[p];
	for(int k=low;k<=high;k++){
		aux[k]=a[k];
	}
	for(int k=low;k<=high;k++){
		if(i>mid)  a[k]=aux[j++];            //特殊情况：左半边元素用尽，取右半边 
		else if (j>high) a[k]=aux[i++];       //特殊情况：右半边元素用尽，取左半边 
		else if (com(aux,i,j)) a[k]=aux[j++];
		else a[k]=aux[i++];
	}	
} 
void merge_sort(int r[],int low,int high){
	if (high<=low) return;     //不断分成两个较小数组直到数组中只有一个元素 
	int mid=(low+high)/2;       //求分界线                        
	merge_sort(r,low,mid);      //递归，调用自身，将左边的数组排序 
	merge_sort(r,mid+1,high);   //递归，调用自身将右边的数组排序 
	merge(r,low,mid,high);      //整合左右排序好的两个数组 
} 


//快速排序1
int partition(int ar[],int left, int right){
	int i=left,j=right;           //设置两个指示i=left,j=right 
	int tmp=ar[left];             //设ar[left]为基准数 
	while(i<j){                     
		while(i<j&&ar[j]>tmp){
			j--;                  //从后向前寻找比基准数大的元素 ，跳过比基准数小的数 
		}
		if(i<j){                 
			ar[i]=ar[j];         //将找到的元素填入空处（被选为基准数的位置） 
			i++;                 //左端指针指向下一个位置（被填入的就不会再被查找到） 
		}
		while(i<j&&ar[i]<tmp){    
			i++;                 //从前往后寻找比基准数小的元素 ，跳过比基准数大的数 
		}                        
		if(i<j){                  
			ar[j]=ar[i];         //将找到的元素填入空处 
			j--;                 //右端指针指向上一位 
		}
	}
	ar[i]=tmp;                   //最后i==j,a[i]或a[j]为基准数的位置重新放入 
	
	return i;                    //将基准数的位置返回 
} 

void quick_sort(int ar[],int left,int right){
	if(left>right){
		return;
	}
	int j=partition(ar,left, right);         
	quick_sort(ar,left,j-1);          //分别对基准数左侧的数组再做一次同样的操作 
	quick_sort(ar,j+1,right);         //对基准数右侧的数组再做一次同样的操作 
}

//快速排序2
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


 
//主程序 
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
