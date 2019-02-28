//L£º1£¬ U£º2£¬ R£º3£¬ D£º4
#include <iostream>
using namespace std;
int map[101][101];
int book[101][101]={0};
int ex,ey,flag=0;
//Convenient to read 
enum tubes{RUC=1,RDC,LDC,LUC,LR,UD };
enum direction{L=1,U,R,D};
struct node{
	int x;
	int y;
}tube[10001];
int top=0;
void dfstube(int cx,int cy,int ft){
	if(cx==ex&&cy==ey+1){
		//successful condition: reach the end 
		flag=1;
		for(int i=1;i<=top;i++){
			cout<<"("<<tube[i].x<<","<<tube[i].y<<")"<<endl;
		}	
		return; 
	}
	//board test
	if(cx<1||cx>ex||cy<1||cy>ey){
		return;
	} 
	//test whether have been visited 
	if(book[cx][cy]==1){
		return;
	}
	
	//Record the infor 
	book[cx][cy]=1;
	top++;
	tube[top].x=cx;
	tube[top].y=cy;
	if(map[cx][cy]>=LR && map[cx][cy]<=UD ){
		if(ft==L){
			dfstube(cx,cy+1,L); // LR tube only 
		}
		if(ft==R){
			dfstube(cx,cy-1,R);//LR tube only 
		}
		if(ft==U){
			dfstube(cx+1,cy,U);//UD tube only
		}
		if(ft==D){
			dfstube(cx-1,cy,D);//UD tube only
		}
	}
	if (map[cx][cy]>=RUC && map[cx][cy]<=LUC){
		if(ft==L){
			dfstube(cx-1,cy,D); //LUC
			dfstube(cx+1,cy,U); //LDC
		}
		if(ft==U){
			dfstube(cx,cy-1,R); //LUC
			dfstube(cx,cy+1,L); //LDC
		}
		if(ft==R){
			dfstube(cx-1,cy,D); //LUC
			dfstube(cx+1,cy,U); //LDC
		}
		if(ft==D){
			dfstube(cx,cy-1,R); //LUC
			dfstube(cx,cy+1,L); //LDC
		}	
	} 
	book[cx][cy]=0;
	top--;  //Important!
	return;
}
int main(){
	int i,j,num=0;
	cout<<"Enter the size of map: ";
	cin>>ex>>ey;
	for(i=1;i<=ex;i++){
		for(j=1;j<=ey;j++){
			cin>>map[i][j];
		}
	}
	dfstube(1,1,L);
	if(flag==0){
		cout<<"Misson impossible!";
	}
	else
		cout<<"Got it!";
	return 0; 
} 
