#include <iostream>
using namespace std;
bool com(int a[],int x,int y){  //ÅĞ¶ÏÊÇ·ña[y]±Èa[x]Ğ¡ 
	if(a[x]>a[y]){
		return true; 
	}
	else 
	return false;
} 
void exch(int a[],int i,int j){ //½»»»ÊıÖµ 
	int temp=a[i];
	a[i]=a[j];
	a[j]=temp;
}

//Ñ¡ÔñÅÅĞò 
void selection_sort(int r[],int a,int b){
	int v;
	int min;
	for(v=a;v<b;v++){
		min=v;                 //ÕÒµ½×îĞ¡ÊıÏÂ±ê 
		for(int w=v+1;w<b;w++){
			if(com(r,min,w)){       //±È½ÏÏÖÓĞÊıÓëÏÂÒ»¸öÊı´óĞ¡£¬ÈôÏÂÒ»¸öÊıĞ¡£¬Ôò½»»»Á½ÊıÏÂ±ê£¬ÒÔÕÒ³öÕâ¸ö·¶Î§ÄÚ£¨v~b)×îĞ¡ÊıÏÂ±ê 
				min=w;
			}
		}
		exch(r,v,min);            //°´ÏÂ±ê½»»»Á½ÊıÔÚÊı×éÖĞµÄÎ»ÖÃ 
	}
}

//²åÈëÅÅĞò 
void insertion_sort(int r[],int a,int b){
	int v;
	for(v=a+1; v<b;v++){        
		for(int w=v;w>=a+1&&com(r,w-1,w);w--){         //´Ór[a+1]¿ªÊ¼ÓëÖ®Ç°ËùÓĞÊı±È½Ï£¬ÈôĞ¡ÓÚÔòÓëÆä½»»»£¬Ö±µ½Ö®Ç°µÄÊı±ÈÆä´ó»òÖ®Ç°Ã»ÓĞÊı×ÖÎªÖ¹ 
			exch(r,w-1,w);	
		}
	}
}

//Ï£¶ûÅÅĞò (´ËÅÅĞòÖ»ÊÊÓÃÓÚa=0) 
void shell_sort(int r[],int a,int b){
	int gap;
	for(gap=a+1;gap<b/3;gap=3*gap+1);          //Çó²½³¤£¬¼´Ïà¸ô¶àÉÙ¸öÊı×Ö½øĞĞ²åÈëÅÅĞò£¬¼´¶àÉÙ¸öÔªËØ
	while(gap>=a+1){                       //ÖÕÖ¹Ìõ¼ş 
		for(int i=gap;i<b;i++){                       //¶ÔÃ¿¸öÔªËØ½øĞĞ²åÈëÅÅĞò£¬´ËÊ±²åÈëÅÅĞò±È½ÏµÄ¼ä¸ôÎª²½³¤â
			for(int j=i;j>=gap&&com(r,j-gap,j);j-=gap){            
				exch(r,j,j-gap);
			}
		}
		gap/=3;
	}
} 

//¹é²¢ÅÅĞò
void merge(int a[],int low, int mid,int high){
	int i=low,j=mid+1,p=high;
	int aux[p];
	for(int k=low;k<=high;k++){
		aux[k]=a[k];
	}
	for(int k=low;k<=high;k++){
		if(i>mid)  a[k]=aux[j++];            //ÌØÊâÇé¿ö£º×ó°ë±ßÔªËØÓÃ¾¡£¬È¡ÓÒ°ë±ß 
		else if (j>high) a[k]=aux[i++];       //ÌØÊâÇé¿ö£ºÓÒ°ë±ßÔªËØÓÃ¾¡£¬È¡×ó°ë±ß 
		else if (com(aux,i,j)) a[k]=aux[j++];
		else a[k]=aux[i++];
	}	
} 
void merge_sort(int r[],int low,int high){
	if (high<=low) return;     //²»¶Ï·Ö³ÉÁ½¸ö½ÏĞ¡Êı×éÖ±µ½Êı×éÖĞÖ»ÓĞÒ»¸öÔªËØ 
	int mid=(low+high)/2;       //Çó·Ö½çÏß                        
	merge_sort(r,low,mid);      //µİ¹é£¬µ÷ÓÃ×ÔÉí£¬½«×ó±ßµÄÊı×éÅÅĞò 
	merge_sort(r,mid+1,high);   //µİ¹é£¬µ÷ÓÃ×ÔÉí½«ÓÒ±ßµÄÊı×éÅÅĞò 
	merge(r,low,mid,high);      //ÕûºÏ×óÓÒÅÅĞòºÃµÄÁ½¸öÊı×é 
} 


//¿ìËÙÅÅĞò1
int partition(int ar[],int left, int right){
	int i=left,j=right;           //ÉèÖÃÁ½¸öÖ¸Ê¾i=left,j=right 
	int tmp=ar[left];             //Éèar[left]Îª»ù×¼Êı 
	while(i<j){                     
		while(i<j&&ar[j]>tmp){
			j--;                  //´ÓºóÏòÇ°Ñ°ÕÒ±È»ù×¼Êı´óµÄÔªËØ £¬Ìø¹ı±È»ù×¼ÊıĞ¡µÄÊı 
		}
		if(i<j){                 
			ar[i]=ar[j];         //½«ÕÒµ½µÄÔªËØÌîÈë¿Õ´¦£¨±»Ñ¡Îª»ù×¼ÊıµÄÎ»ÖÃ£© 
			i++;                 //×ó¶ËÖ¸ÕëÖ¸ÏòÏÂÒ»¸öÎ»ÖÃ£¨±»ÌîÈëµÄ¾Í²»»áÔÙ±»²éÕÒµ½£© 
		}
		while(i<j&&ar[i]<tmp){    
			i++;                 //´ÓÇ°ÍùºóÑ°ÕÒ±È»ù×¼ÊıĞ¡µÄÔªËØ £¬Ìø¹ı±È»ù×¼Êı´óµÄÊı 
		}                        
		if(i<j){                  
			ar[j]=ar[i];         //½«ÕÒµ½µÄÔªËØÌîÈë¿Õ´¦ 
			j--;                 //ÓÒ¶ËÖ¸ÕëÖ¸ÏòÉÏÒ»Î» 
		}
	}
	ar[i]=tmp;                   //×îºói==j,a[i]»òa[j]Îª»ù×¼ÊıµÄÎ»ÖÃÖØĞÂ·ÅÈë 
	
	return i;                    //½«»ù×¼ÊıµÄÎ»ÖÃ·µ»Ø 
} 

void quick_sort(int ar[],int left,int right){
	if(left>right){
		return;
	}
	int j=partition(ar,left, right);         
	quick_sort(ar,left,j-1);          //·Ö±ğ¶Ô»ù×¼Êı×ó²àµÄÊı×éÔÙ×öÒ»´ÎÍ¬ÑùµÄ²Ù×÷ 
	quick_sort(ar,j+1,right);         //¶Ô»ù×¼ÊıÓÒ²àµÄÊı×éÔÙ×öÒ»´ÎÍ¬ÑùµÄ²Ù×÷ 
}

//¿ìËÙÅÅĞò2
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


 
//Ö÷³ÌĞò 
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
