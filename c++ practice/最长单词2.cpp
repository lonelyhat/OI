#include <iostream>
using namespace std;
int main(){
	char s[501];                  
	cin.getline(s,501);
	int count[501]={0};           //用于记录第。。。个单词长度 
	int b[501]={0};          //用来记每一个单词首字母位置 
	int i=0,j=0;
	int m=0;
	for(int i=0;s[i]!='.';i++){
		if(s[i]!=' '){
			count[j]++;              //该单词长度+1 ，由此求出该单词长度 
		}
		else
		{
			j++;                    //单词次数+1 ， 最后j值为单词总数量-1；count[0]记录的是第一个单词长度； 
			b[j]=i+1;              // 写入第j个单词开头字母位置 
		}
	}
	int max=count[0];                  //设最长单词中的长度 
	int n=0;                    //设最长单词序号 
	for(int k=0;k<=j;k++){
		if(max<count[k]){
			max=count[k]; 
			n=k;
		}
	} 
	//由此找出了最长的单词的序号n和其长度 
	for(int p=b[n];p<b[n]+max;p++){
		cout<<s[p];
	}
}
