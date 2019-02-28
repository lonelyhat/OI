#include <iostream>
using namespace std;
/*
int main(){
	int n;
	cin>>n;
	char c[50][50];
	for(int i=0;i<n;i++)
	for(int j=0;j<n;j++)
	{
		if((i+j)%2==0)
		c[i][j]='o';
		else
		c[i][j]='x';
	}
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<n;j++)
		cout<<c[i][j];
	cout<<endl;
	}
}
*/
/*
int main(){
	int n,sum=0;
	int a[100000];
	cin>>n;
	for(int i=0;i<n;i++){
		cin>>a[i];
		sum=sum+a[i];
	}
	cout<<sum;
}
*/
/*
int main(){
	int n;
	cin>>n;
	cout<<n<<" ";
	while(n>1)
	{
		if(n%2==0){
			n=n/2;
			cout<<n<<" ";
		}
		else{
			n=3*n+1;
			cout<<n<<" ";
		}
	}
}
*/
/*
int main(){
	int m,n,s=0;
	cin>>m>>n;
	char a[1000][1000];
	for(int i=0;i<m;i++)
	for(int j=0;j<n;j++)
	{
		cin>>a[i][j];
	}
	for(int i=0;i<m;i++)
	for(int j=0;j<n;j++)
	{
		if(a[i][j]=='*'){
			s++;
		}
	}
	cout<<s;
}
*/
/*
int main(){
	int n;
	cin>>n;
	for(int i=1;i<=n;i++)
	{
		cout<<i*i<<" ";
	}
}
*/
/*
int main(){
	int n,t,sum1=0,sum2=0;
	int j,k,l;
	int a[2000];
	cin>>n;
	for(int i=0;i<n;i++){
		cin>>t;
		sum1=sum1+t;
	}
	for(j=0;j<n;j++){
		cin>>a[j];
	}
	for(k=n-1;k>=0;k--){
		for(l=k-1;l>=0;l--){
			if(a[k]>a[l]){
				int tmp;
				tmp=a[k];
				a[k]=a[l];
				a[l]=tmp;
			}
		}
	}
	for(int index=0;index<n;index++){
		sum2=sum2+a[index]*index;
	}
	cout<<sum1+sum2;
}
*/
/*
int main(){
	int l,s,h;
	cin>>l>>s>>h;
	if((2*l-s-h)>(s+h)){
		cout<<s+h;
	}
	else
	cout<<2*l-s-h;
}
*/
/*
int main(){
	int a[100000];
	int n,sum=0;
	cin>>n;
	for(int i=0;i<n;i++){
		cin>>a[i];
		if(a[i]<0)
		sum=sum-a[i];
		else
		sum=sum+a[i];
	}
	cout<<sum;
}
*/
/* 
int main(){
	long long n;
	bool b;
	cin>>n;
	if(n<2){
		cout<<"Not Prime";
	}
	else if(n==2){
		cout<<"Prime";
	}
	else if(n==3){
		cout<<"Prime";
	}
	if(n>3){
		for(int i=2;i*i<=n;i++){
		if((n%i==0)&&(b==1)){
			b=0;
			break;
		}
		
		else if(n%i!=0)
		b=1;
	}
	if(b==1)
	cout<<"Prime";
	else
	cout<<"Not Prime";
	}	
}
*/
/*
int main(){
	char ar[25001];
	int index;
	int num;
	int a=0,b=0,c=0,d=0,e=0,f=0,g=0,h=0,i=0,j=0,k=0,l=0,m=0,n=0,o=0,p=0,q=0,r=0,s=0,t=0,u=0,v=0,w=0,x=0,y=0,z=0;
	cin>>num;
	for(index=0;index<num;index++){
		cin>>ar[index];
	}
	for(index=0;index<num;index++){
		if(ar[index]=='a')
		a++;
		else if(ar[index]=='b')
		b++;
		else if(ar[index]=='c')
		c++;
		else if(ar[index]=='d')
		d++;
		else if(ar[index]=='e')
		e++;
		else if(ar[index]=='f')
		f++;
		else if(ar[index]=='g')
		g++;
		else if(ar[index]=='h')
		h++;
		else if(ar[index]=='i')
		i++;
		else if(ar[index]=='j')
		j++;
		else if(ar[index]=='k')
		k++;
		else if(ar[index]=='l')
		l++;
		else if(ar[index]=='m')
		m++;
		else if(ar[index]=='n')
		n++;
		else if(ar[index]=='o')
		o++;
		else if(ar[index]=='p')
		p++;
		else if(ar[index]=='q')
		q++;
		else if(ar[index]=='r')
		r++;
		else if(ar[index]=='s')
		s++;
		else if(ar[index]=='t')
		t++;
		else if(ar[index]=='u')
		u++;
		else if(ar[index]=='v')
		v++;
		else if(ar[index]=='w')
		w++;
		else if(ar[index]=='x')
		x++;
		else if(ar[index]=='y')
		y++;
		else if(ar[index]=='z')
		z++;
	}
	cout<<"a"<<a<<endl
	<<"b"<<b<<endl
	<<"c"<<c<<endl
	<<"d"<<d<<endl
	<<"e"<<e<<endl
	<<"f"<<f<<endl
	<<"g"<<g<<endl
	<<"h"<<h<<endl
	<<"i"<<i<<endl
	<<"j"<<j<<endl
	<<"k"<<k<<endl
	<<"l"<<l<<endl 
	<<"m"<<m<<endl
	<<"n"<<n<<endl
	<<"o"<<o<<endl
	<<"p"<<p<<endl
	<<"q"<<q<<endl
	<<"r"<<r<<endl
	<<"s"<<s<<endl
	<<"t"<<t<<endl
	<<"u"<<u<<endl
	<<"v"<<v<<endl
	<<"w"<<w<<endl
	<<"x"<<x<<endl
	<<"y"<<y<<endl
	<<"z"<<z<<endl;
}
*/
/*
int main(){
	int N,sum=0;
	cin>>N;
	int a[10000];
	for(int i=0;i<N;i++){
		cin>>a[i];
		sum=sum+a[i];
	}
	cout<<sum;
}
*/
/*´À´ÀµÄ×ö·¨for diamond 
int main(){
	int n;
	cin>>n;
	int i,j,k,c=1,m,a,b;
	int e=2*n-3;
	for(i=n-1;i>=0;i--){
		for(j=i;j>0;j--){
				cout<<" ";
		}
		for(k=1;k<=c;k+=1){
			cout<<"*";
		}
		c+=2;
		cout<<endl;
	}
	for(m=1;m<n;m++){
		for(a=1;a<=m;a++){
			cout<<" ";
		}
		for(b=e;b>0;b--){
			cout<<"*";
		}
		e-=2;
		cout<<endl;
	}
}
*/ 
/*
int main(){
	int ar[50][50];
	int n,e,j,k,a,b;
	cin>>n>>e;
	for(int i=0;i<e;i++)
	{
		cin>>j>>k;
		ar[j-1][k-1]=1;
		ar[k-1][j-1]=1;
	}
	for(a=0; a<n; a++)
	for(b=0; b<n; b++){
	if(ar[a][b]!=1){
		ar[a][b]=0;
	}
	}
	for(int x=0;x<n;x++){
		for(int y=0;y<n;y++){
		cout<<ar[x][y];
	}
    cout<<endl;
	}
} 
*/
/*
int main(){
	long long a,b;
	cin>>a>>b;
	if(a>b){
		if(b==0){
			cout<<a;
		}
		else {
		while(a%b!=0){
			long long tmp;
			tmp=a;
			a=b;
			b=tmp%b;
		}	
		cout<<b;
       }
   }
   if(b>a){
     	if(a==0){
			cout<<b;
		}
		else {
		while(b%a!=0){
			long long tmp;
			tmp=b;
			b=a;
			a=tmp%a;
		}	
		cout<<a;
       }
   }
}
*/
/*
int main(){
	int ar[1000];
	int n;
	cin>>n;
	for(int i=0; i<n;i++){
		cin>>ar[i];
	}
	cout<<ar[n/2];
}
*/

#include <bits/stdc++.h>
using namespace std;
int main(){
	long long n;
	long long ar[300000];
	cin>>n;
	for(long long i=0; i<n;i++){
		cin>>ar[i];
	}
	for(long long j=0; j<n-1; j++){
		for(long long k=0; k<n-1; k++){
			
			if(ar[k]>ar[k+1]){
				long long tmp;
				tmp=ar[k+1];
				ar[k+1]=ar[k];
				ar[k]=tmp;
			}
		}
	}
	for(long long z=0; z<n;z++)
	cout<<ar[z]<<" ";
}

/*
int main() {
    int ar[10000];
    int sum=0;
    for(int i=0; i<10000; i++){
    	cin>>ar[i];
    	if(ar[i]==-1)
        break;
        else
        sum=sum+ar[i];
	}
    cout<<sum;
}
*/

