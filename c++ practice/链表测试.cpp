#include <iostream>
using namespace std;
typedef int ElemType;
struct LNode{
	ElemType data;
	LNode *next;
}; 
typedef LNode* LinkList;
void input(ElemType *ep)
{
	cin>>*ep;
}
void CreateLinkF(LinkList *L, int n, void(*input)(ElemType*) ){
	LinkList s;
	*L=new LNode;
	(*L)->next=NULL;
	for(;n>0;n--){
		s=new LNode;
		input(&s->data);
		s->next=(*L)->next;
		(*L)->next=s;
	}
}
int main(){
	LinkList L; int n;cin>>n;
	CreateLinkF(&L,n,input);
}
 

